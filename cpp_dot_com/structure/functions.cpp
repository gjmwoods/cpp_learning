#include "iostream"

using namespace std;

int addition (int a, int b) {
    int r;
    r=a+b;
    return r;
}

void duplicate (int& a, int& b, int& c)
{
    a*=2;
    b*=2;
    c*=2;
}

string concatenate (const string& a, const string& b) {//const ensure references are not updated within func call
    return a+b;
}

int divide (int a, int b=2) { //optional arguments
    int r;
    r=a/b;
    return (r);
}

int randomSeven(); //declare now, define later! Useful if you have interleving functions that define each other

int main() {
    // type name ( parameter1, parameter2, ...) { statements }

    auto i = addition(1,2); //call by value - ie values are copied into local variables a, b

    int x = 1, y =2, z=3;

    duplicate(x,y,z); // call by reference - variables are changed in place.
    //use when copying is expensive, usually for compound types

    divide(1);
    divide(1,2);

    randomSeven();

    //compiler adds implicit return 0; here!
}

int randomSeven() {
    return 7;
}