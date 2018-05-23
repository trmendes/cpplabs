#include <iostream>
#include "../StanfordCPPLib/io/console.h"
#include "../StanfordCPPLib/io/simpio.h"

using namespace std;

int main() {
    cout << "Hello world" << endl;
    int age = getInteger("How old are you?");
    cout << "Wow, " << age << " is really old." << endl;
    return 0;
}
