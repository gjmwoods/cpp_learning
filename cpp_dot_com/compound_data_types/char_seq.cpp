#include "iostream"
#include "string"

using namespace std;

int main() {
    char foo [20];

    //null-terminated char seq
    char myword[] = { 'H', 'e', 'l', 'l', 'o', '\0' };

    //these are the same
    char myword1[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
    char myword2[] = "Hello";

    //these are C-strings but many libs are overloaded to also accept library strings
    string my_string_yo = "yo";

    cout << my_string_yo << endl;
    cout << myword1 << endl;

    //you can change between the two
    char myntcs[] = "some text";
    string mystring = myntcs;  // convert c-string to string
    cout << mystring;          // printed as a library string
    cout << mystring.c_str();  // printed as a c-string


}