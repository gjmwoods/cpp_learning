#include "iostream"

using namespace std;

template <typename SomeTypeT> //or class
SomeTypeT sum (SomeTypeT a, SomeTypeT b)
{
    return a+b;
}

template <class T, class U>
bool are_equal (T a, U b)
{
    return (a==b);
}

template <class T, int N>
T fixed_multiply (T val)
{
    return val * N;
}

int main() {
    //overloading as expected

    // template functions - define function operating on range of types

    sum(1,2);
    cout << sum<string>("hi", "bo");

    are_equal(1, 1.0);

    fixed_multiply<int, 3>(123);
}

