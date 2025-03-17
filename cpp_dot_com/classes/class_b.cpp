#include "iostream"

using namespace std;

class CVector {
public:
    static const int alwaysthesame = 3;         //class vars
    static int n;
    int x,y;
    CVector () {};
    CVector (int a,int b) : x(a), y(b) {}       // We have "this" to reffer to the current object
    CVector operator + (const CVector&);        //You can override operators, cool

    int get(int notused) {return x;}
    int get() const {return x;}
    //void messItUp() const{ x = 39}            //const fucntions cannot modify non-staic member vars
    void messUpMyStatic() const {n = 456;}
};

int CVector::n = 10;                            //static vars must be init outside class

CVector CVector::operator + (const CVector& param) {
    CVector temp;
    temp.x = x + param.x;
    temp.y = y + param.y;
    return temp;
}

CVector operator * (const CVector& vecta, const CVector& vectb) { //non member function
    CVector temp;
    temp.x = vecta.x * vectb.y;
    temp.y = vecta.y * vectb.y;
    return temp;
}

int main() {
    CVector foo (3,1);
    CVector bar (1,2);
    CVector result;
    result = foo + bar;
    cout << bar.x << ',' << bar.y << '\n';
    result = foo.operator+(bar); //eq
    cout << result.x << ',' << result.y << '\n';

    const CVector frozen (42,45);
    //frozen.x = 5;                                 //Not allowed!
    //frozen.get(4);                                //Only constant functions can be called
    frozen.get();
    return 0;
}