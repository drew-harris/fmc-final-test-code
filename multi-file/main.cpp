#include <iostream>
#include "./animal.h"

int main() {
    Dog *dog = new Dog();

    // Speak twice
    dog->speak();
    dog->speak();

    return 0;
}
