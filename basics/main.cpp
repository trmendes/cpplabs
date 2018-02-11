#include <iostream>

#include "cat.h"

using namespace std;

int main(void) {
    Cat cat;
    cat.setHappy(true);
    cat.speak();
    cat.jump();

    Cat otherCat;
    cat.setHappy(false);
    otherCat.speak();
    otherCat.jump();
    return 0;
}
