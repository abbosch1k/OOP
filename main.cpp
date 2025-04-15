#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
protected:
    string name;

public:
    Animal(const string& name) : name(name) {}

    virtual void speak() const {
        cout << name << " makes a sound." << endl;
    }

    virtual ~Animal() {}
};

// Derived class - Dog
class Dog : public Animal {
public:
    Dog(const string& name) : Animal(name) {}

    void speak() const override {
        cout << name << " says: Woof woof!" << endl;
    }
};

// Derived class - Cat
class Cat : public Animal {
public:
    Cat(const string& name) : Animal(name) {}

    void speak() const override {
        cout << name << " says: Meow!" << endl;
    }
};

// Main program
int main() {
    Animal* zoo[3];
    zoo[0] = new Animal("Generic Animal");
    zoo[1] = new Dog("Buddy");
    zoo[2] = new Cat("Whiskers");

    for (int i = 0; i < 3; ++i) {
        zoo[i]->speak();
    }

    // Free memory
    for (int i = 0; i < 3; ++i) {
        delete zoo[i];
    }

    return 0;
}
