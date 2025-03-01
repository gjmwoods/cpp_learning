#include "iostream"

using namespace std;

struct product { //elements grouped under one name
    int weight; //member
    double price;
};

struct { //doesn't need name since struct vars already defined
    int weight;
    double price;
} banana, turnip;

struct nested_stuct {
    product neseted_product;
    string fancy_new_thing;
};


int main() {
    product apple = {30, 10.4};

    cout << apple.weight << endl << apple.price << endl;

    banana.price = 22.2;
    banana.weight = 4;

    //pointers still work
    product * apple_ptr = &apple;
    cout << (*apple_ptr).weight;
    cout << apple_ptr->weight; // arrow op has same semantics as above

    nested_stuct nestedStuct = {{3, 3.5}, "hello"};
    cout << nestedStuct.neseted_product.weight;
}