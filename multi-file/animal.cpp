class Animal {
public:
  virtual void speak() = 0;
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
