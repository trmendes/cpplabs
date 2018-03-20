#include <iostream>

#include "Person.hpp"

int main() {
    Person person;
    person.setName("Rafael");
    std::cout << person.toString() << std::endl;
    return 0;
}
