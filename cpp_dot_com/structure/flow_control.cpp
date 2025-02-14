#include "iostream"

using namespace std;

int main() {
    if (101 == 100)
        cout << "x is 100";

    int n = 10;

    while (n>0) {  //and do while with usual semantics
        cout << n << ", ";
        --n;
    }

    for (int n=10; n>0; n--) { //and looping over iterations/ranges
        cout << n << ", ";
    }

    //we've break and continue with usual semantics

    goto aLable; // unconditional jump. No stack unwinding. Not common/suitable for HL language
    aLable:

    cout << "The end";

    switch (n) { //switch blocks with usual semantics
        case 1:
        case 2:
        case 3:
            cout << "x is 1, 2 or 3";
            break;
        default:
            cout << "x is not 1, 2 nor 3";
    }
}
