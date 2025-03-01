#include "iostream"

using namespace std;

union mytypes_t {                   //Referring to the same area of memory
    int parent;
    char children[4];
} mytypes;

int main() {
    typedef char C;                 // C-style type aliases
    typedef unsigned int WORD;
    typedef char * pChar;
    typedef char field [50];

    using CPP = char;               // Cpp type aliases
    using WORD_PP = unsigned int;   // both semantically equal but this is more compatible
    using pChar_PP = char *;
    using field_PP = char [50];

    //aliases useful for readability (reducing long type names) and adding abstraction layer

    //Union types
    mytypes.children[0] = 1;
    mytypes.children[1] = 0;
    mytypes.children[2] = 0;
    mytypes.children[3] = 0;

    cout << mytypes.parent << endl;

    mytypes.parent = 987654325;

    cout << mytypes.children[0] << endl;
    cout << mytypes.children[1] << endl;
    cout << mytypes.children[2] << endl;
    cout << mytypes.children[3] << endl;

    enum colors_t {black, blue, green, cyan, red, purple, yellow, white}; //represent by ints: 0,1,2,..
    colors_t color = black;
    int no = black;
    cout << no << endl;

    enum class Colors {black, blue, green, cyan, red, purple, yellow, white}; //proppa enums
    Colors classColor = Colors::black; //not converted to int

    enum class EyeColor : char {blue, green, brown}; //Eyecolor is a distinct type with the same size of a char (1 byte)

}