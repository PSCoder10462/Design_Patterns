// this is bad way to use smart pointers
// neither subject nor object should own one another
#include <algorithm>
#include <iostream>
#include <list>
#include <memory>
#include <string>

class ISubscriber {
  public:
    // Pure virtual function to make the class abstract
    virtual void update(const std::string &) = 0;
    // prevents delete via base constructor unambiguous
    virtual ~ISubscriber() = default;
};

class IPublisher {
  public:
    // method to subscribe
    virtual void subscribe(const std::weak_ptr<ISubscriber> &) = 0;
    // method to unsubscribe
    virtual void unsubscribe(const std::shared_ptr<ISubscriber> &) = 0;
    // method to notify all Subscribers about the change
    virtual void notifySubscribers() = 0;
    virtual ~IPublisher() = default;

  protected:
    std::list<std::shared_ptr<ISubscriber>> subs;
};

class Subscriber : public ISubscriber {
  public:
    void update(const std::string &msg) override {
        std::cout << this->id << " " << msg << std::endl;
    }

    Subscriber(int sid) : id(sid) {}

  private:
    int id;
};

class Publisher : public IPublisher {
  public:
    void subscribe(const std::weak_ptr<ISubscriber> &subscriber) override {
        if (auto sub = subscriber.lock())
            subs.push_front(sub);
    }

    void unsubscribe(const std::shared_ptr<ISubscriber> &sub) override {
        auto itr = std::find(subs.begin(), subs.end(), sub);
        if (itr != subs.end())
            subs.erase(itr);
    }

    void notifySubscribers() override {
        for (const auto &sub : subs)
            sub->update("update message");
    }
};

int main() {
    Publisher obs;

    std::shared_ptr<Subscriber> s1 = std::make_shared<Subscriber>(1);
    std::shared_ptr<Subscriber> s2 = std::make_shared<Subscriber>(2);
    std::shared_ptr<Subscriber> s3 = std::make_shared<Subscriber>(3);

    obs.subscribe(s1);
    obs.subscribe(s2);
    obs.subscribe(s3);

    obs.notifySubscribers();

    obs.unsubscribe(s2);

    obs.notifySubscribers();
    return 0;
}
