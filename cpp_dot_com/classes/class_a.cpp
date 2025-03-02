#include "iostream"

using namespace std;

class Rectangle {
    int width, height;              //Private by default
public:
    Rectangle ();                   //Default Constructor
    Rectangle (int,int);
    void set_values (int,int);
    int area() {return width*height;} //Define inline
};

Rectangle::Rectangle() {
    width = 10;
    height = 10;
}

Rectangle::Rectangle(int w, int h) {
    width = w;
    height = h;
}

void Rectangle::set_values (int x, int y) { //or out with scope ::. No difference other than compile optimizations
    width = x;
    height = y;
}

class Circle {
    double radius;
public:
    Circle(double r) : radius(r) { }                //Member initialization
    double circum() {return 2*radius*3.14159265;}
};

int main() {
    Rectangle rect = Rectangle(1, 2);
    Rectangle rectb (3,4);   // functional form initialization
    Rectangle rect_defualt;         //Default constructor used
    Rectangle rect_func();          //Is function declaration
    rect.set_values(1,2);
    cout << rect.area();

    Circle foo (10.0);   // functional form
    Circle bar = 20.0;   // assignment init.
//    Circle baz {30.0};   // uniform init. Cannot be confused with function dec.
//    Circle qux = {40.0}; // POD-like

    //Usual pointer shenanegans apply

    //Stuct and unions are also classes with default access being public
}