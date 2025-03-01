#include "new"
#include "iostream"

using namespace std;

int main() {
    int * i = new int[5]; //dynamically allocated memory
    // if allocation fails, a bad_alloc execption is thrown. This is the preffered way.

    int * j = new (nothrow) int[5];

    if (j == nullptr) {
        //handle alloc fail
    }

    delete[] i; //reclaim memory
    delete[] j;

    std::cout << i[1]; // nothing stopping you from accessing deallocated memory

    //C also provides malloc, calloc, realloc and free. Dont mix these
}