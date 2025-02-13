
int main() {
    int i, j;

    i = 5; //assignment
    j = 2 + (i = 7); //assignments are evaluated to their stored value

    i = i % 10; //artihmetic ops +,-,*,/ and %

    i += 20; //equivalent to i = i + 20;

    // we have ++x and x++ with the usual post/pre assginement semantics
    // relational operators ==, >=, ...
    // logical ops !, && and || with usual fail fast evaluation
    // ? :

    int weird = (i=20, j+10); //all exp evaulated but only rightmost is the value of the whole exp

    //bitwise operators as usual

    //casting
    int m;
    float f = 3.14;
    m = (int) f;
    //or
    m = int (f);

    sizeof(m); //return the size of variable (or type) in bytes

    //usual operator precedence rules (from scope :: as highest to , as lowest). Multiple ops with the same
    //precedence have a defined order (from left to right, or right to left).
}