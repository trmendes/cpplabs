#include <iostream>

#include "cat.h"

void Cat::speak() {
    if (happy) {
        std::cout << "meow\n";
    } else {
        std::cout << "ssss\n";
    }
}
void Cat::jump() {
    std::cout << "Jumping to the top of the bookshelf\n";
}
void Cat::setHappy(bool mood) {
    happy = mood;
}
