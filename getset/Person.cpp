#include "Person.hpp"

Person::Person() {
    name = "Thiago";
}

std::string Person::toString() {
    return "Person's name is " + name;
}

void Person::setName(std::string newName) {
    name = newName;
}

