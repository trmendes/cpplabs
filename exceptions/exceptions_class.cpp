#include <iostream>

using namespace std;

class CanGoWrong {
    public:
        CanGoWrong() {
            /* If C can't alloc memory it will generate an expection that we can
             * handle */
            char * pMemory = new char[999999999999];
            delete [] pMemory;
        }
};

int main() {
    try {
        CanGoWrong wrongObject;
    } catch (bad_alloc &e) {
        cout << "Cant't alloc memory: " << e.what() << endl;
    }

    cout << "Still Running \\o/" << endl;

    return 0;
}
