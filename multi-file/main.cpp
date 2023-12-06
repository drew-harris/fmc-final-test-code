#include <iostream>
#include "./animal.cpp"

int main() {
    Dog *dog = new Dog();

    // Speak twice
    dog->speak();
    dog->speek();

    return 0;
}
