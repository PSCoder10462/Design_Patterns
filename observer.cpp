#include <algorithm>
#include <iostream>
#include <list>
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
    virtual void subscribe(ISubscriber *) = 0;
    // method to unsubscribe
    virtual void unsubscribe(ISubscriber *) = 0;
    // method to notify all Subscribers about the change
    virtual void notifySubscribers() = 0;
    virtual ~IPublisher() = default;

  protected:
    std::list<ISubscriber *> subs;
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
    void subscribe(ISubscriber *sub) override {
        subs.push_front(sub);
    }

    void unsubscribe(ISubscriber *sub) override {
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
    Publisher pub;

    Subscriber *s1 = new Subscriber(1);
    Subscriber *s2 = new Subscriber(2);
    Subscriber *s3 = new Subscriber(3);


    pub.subscribe(s1);
    pub.subscribe(s2);
    pub.subscribe(s3);

    pub.notifySubscribers();

    pub.unsubscribe(s2);

    pub.notifySubscribers();


    pub.unsubscribe(s1);
    pub.unsubscribe(s3);
    delete s1;
    delete s2;
    delete s3;
    return 0;
}
