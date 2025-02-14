#include "iostream"

int foo;        // global variable

int some_function ()
{
    int bar;      // local variable
    bar = 0;
}

int other_function ()
{
    foo = 1;  // ok: foo is a global variable
    //bar = 2;  // wrong: bar is not visible from this function
}

namespace mynamespace {
    int a = 5, b;
}

namespace bazza { int a; } //namespaces can be defined in a split fashion
namespace bar { int b; }
namespace bazza { int c; }

using namespace mynamespace;

namespace newname = mynamespace; //you can do the flippyflip (aka aliasing)

int main() {
    int a = 3;

    std::cout << "Local" << std::endl;
    std::cout << a;

    std::cout << "Namespaces" << std::endl;
    std::cout << mynamespace::a;

    {
        using namespace std;
        cout << "You can do this too";
    }

    //static storage vs automatic. Static (ie global/namespace) are allocated for program duration and initialized with 0
    //automatic (e.g. within a block) only available within a block and NOT initialized.
}