#include <iostream>
using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

int main() {

    5; //literal constant

    75;         // decimal
    0113;       // octal
    0x4b;       // hexadecimal

    75;         // int
    75u;        // unsigned int
    75l;        // long
    75ul;       // unsigned long
    75lu;       // unsigned long

    3.14159;    // 3.14159   double by default
    6.02e23;    // 6.02 x 10^23
    1.6e-19;    // 1.6 x 10^-19
    3.0;        // 3.0

    3.14159L;   // long double
    6.02e23f;   // float

    'z';
    'p';
    "Hello world";
    "How do you do?";

    bool foo = true;
    bool bar = false;
    int* p = nullptr;

    const double pi = 3.1415926; //non-changeable or final
    const char tab = '\t';

    cout << "gimmie newline";
    cout << NEWLINE; //replace by preprocessor blindly
    cout << "now";
}