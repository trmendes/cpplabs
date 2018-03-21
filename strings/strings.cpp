#include <iostream>
#include <sstream>

int main() {
    std::string name = "bob";
    int age = 30;
    std::stringstream ss;

    ss << "name: " << name << " - age: " << age;

    std::cout << ss.str() << std::endl;

    return 0;
}
