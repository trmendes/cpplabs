#include <iostream>

using namespace std;

void uses_nested_might_go_wrong();

void might_go_wrong();

int main() {
    /* As soon as a function throw an expecetion it stops its excecution so the
     * fucntion who called it can handle the exception and keep the software
     * running
     */

    try {
        uses_nested_might_go_wrong();
    } catch (int e) {
        cout << "error code: " << e << endl;
    } catch (char const * e) {
        cout << "error msg: " << e << endl;
    } catch (string &e) {
        cout << "string error msg: " << e << endl;
    }

    cout << "the program still running even after the error" << endl;
    return 0;
}

void uses_nested_might_go_wrong() {
    might_go_wrong();
    /* We could handle the exception here but if we don't
     * the exception will be sent to the function who called
     * uses_nested_might_go_wrong.
     */
}

void might_go_wrong() {
    bool error0 = false;
    bool error1 = false;
    bool error2 = true;

    if (error0) {
        throw 8;
    }
    if (error1) {
        throw "Catching our first cpp error";
    }
    if (error2) {
        throw string("Something else went wrong");
        /* One important thing here is:
         * C will auto clean up the memory here when you use
         * an object. It is part of the exceptions specifications.
         * you don't need a new for the object here.
         */
    }
}
