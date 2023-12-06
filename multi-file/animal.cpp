#include <iostream>

class Animal {
public:
  void speak() {
    print("hey im a animal");
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
};
