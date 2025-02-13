#include <iostream>
#include <string>
using namespace std;

int main() {

    //usual suspects for standard/fundamental types
    unsigned long int myvar = 1234; //full name
    unsigned long anothervar = 6789; //can be shorteded

    char32_t acharvar = 'h';
    wchar_t longestChar = 'h';

    decltype(nullptr) anullpointer;

    //Note types dont have a standard size (except char), rather just minimums. This makes c++ flexible on
    // different platformas

    long l; //l has undetermined/undefined value value

    long x (0); // constructor init
    long y {1}; // uniform init
    long z = 2; // c-like init

    auto letcppfigurethisout = 123.5;
    decltype(letcppfigurethisout) iJustCopyMyMatesType;

    iJustCopyMyMatesType = 456.7;

    //compound types
    string imAString = "Muahahahaha";

    string mystring1 = "This is a string";
    string mystring2 ("This is a string");
    string mystring3 {"This is a string"};

    return 0;
}

