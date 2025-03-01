#include "iostream"

using namespace std;

void increase (void* data, int psize) //void pointers, great for flexibility but need to a have a valid type
//before being dereferenced
{
    if ( psize == sizeof(char) )
    { char* pchar; pchar=(char*)data; ++(*pchar); }
    else if (psize == sizeof(int) )
    { int* pint; pint=(int*)data; ++(*pint); }
}

int main() {
    int myvar = 11;
    int another_var = 12;
    int * myvar_ptr = &myvar; // declaring a pointer

    cout << myvar << endl;
    cout << &myvar << endl; //get a pointer with &
    cout << myvar_ptr << endl;
    cout << *myvar_ptr << endl;

    int myarray [20];
    int * mypointer;

    mypointer = myarray;

    //arrays and pointer are very similar only that you cannot reassign an array
    cout << &myvar_ptr[5] << endl; //an integer sized offset of the pointer

    //pointer arithmetic is always relative to it's type size (on whichever platform your running)
    cout << myvar_ptr << endl;
    cout << myvar_ptr + 1 << endl; //an address pointer that is 4 bytes forwards

    //pointers can be constants. Used in fucntions to specify read-only
    const int * p = &myvar;
    int const * pb = &myvar; // same as above
    //*p = 23; not allowed
    p = &another_var;

    const int * const p4 = &another_var;
    cout << another_var;

    const char * foo = "hello"; //declare constant pointer to char array containing hello\o
    cout << *foo << *(foo+1) << *(foo+2) << *(foo+3) << *(foo+4) << *(foo+5) << endl;

    int ** myvar_ptr_ptr = &myvar_ptr; //pointer of pointers (pointer inception)
    cout << **myvar_ptr_ptr << endl;

    char a = 'x';
    int b = 1602;
    increase (&a,sizeof(a));
    increase (&b,sizeof(b));
    cout << a << ", " << b << '\n';
    return 0;
}