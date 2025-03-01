#include "iostream"

int global[5]; //initialized to all 0s

void printarray (int arg[], int length) {
    for (int n=0; n<length; ++n)
        std::cout << arg[n] << ' ';
    std::cout << '\n';
}

int main() {

    int bin[5]; // uninitialized is not empty!
    std::cout << bin[0] << std::endl << bin[1] << std::endl << bin[2] <<std::endl << bin[3] << std::endl << bin[4];

    int foo [5] =  { 16, 2, 77, 40, 12071 };
    int bar [5] = { 10, 20, 30 }; // can be shorter, remaining filled with 0s
    int baz[5] = {}; //all zeros

    //int toobig [2] = {1,2,3,4};

    //int universal_init[3] { 10, 20, 30 };

    std:std::cout << bar[2] << std::endl;

    int jimmy [3][5]; //as many dimensions as you want

    //int jimmy [3][5];   // is equivalent to
    //int jimmy [15];     // (3 * 5 = 15)

    //pass arrays as references/pointers
    printarray (bar, 5); //note no safety rails for going out of bounds

    //void procedure (int myarray[][3][4]) multi dimensional array need
    // their additional dimentions specified

    //arrays are direct impl of C arrays. C++ also provides an array impl called a "container"
}