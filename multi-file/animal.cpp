#include <iostream>

class Animal {
public:
  void speak() {
    std::cout << "hey im an animal" << std::endl;
  }
};

class Dog : public Animal {
public:
  void speak() {
    print("hey im a dog");
  };
};

class Cat : public Animal {
public:
  void speak() {
    print("hey im a cat");
  }
}
