#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>

class Person {
    private:
        std::string name;
    public:
        Person();
        std::string toString();
        void setName(std::string newName);
};

#endif /* PERSON_HPP */

