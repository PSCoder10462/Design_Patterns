#include <iostream>

class Singleton {
  public:
    static Singleton &get_instance() {
        static Singleton obj;
        return obj;
    }

    const int &Data() { return data; }

    void Data(const int &data) { this->data = data; }

  private:
    Singleton() = default;
    Singleton(const Singleton &) = delete;
    Singleton &operator=(const Singleton &) = delete;
    int data = 5;
};

int main() {
    std::cout << Singleton::get_instance().Data() << std::endl;
    Singleton::get_instance().Data(10);
    std::cout << Singleton::get_instance().Data() << std::endl;
    return 0;
}
