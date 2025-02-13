#include "iostream"
#include <sstream>

using namespace std;

int main() {
    //cin, cout, cerr, clog; // IO streams
    //cout << 120;   //<< insertion operator passes value into stream
    cout << 120 << 345 << 678; //chain them together for lols;
    cout << "First sentence." << endl; //line breaks (or use \n). Forces full buffered streams to flush.

//    string input;
//    cin >> input; //wait for input from keyboard and ENTER (cr)
//    cout << "\n you wrote this nonsense " << input << endl;

    //you can also chain >> operators

    string mystr; // >> only gives you single word. Use this for strings with spaces
    cout << "What's your name? ";
    getline (cin, mystr);
    cout << mystr;

    string mystr2 ("1204"); //string stream is useful for converting string values to literals and vice versa.
    int myint;
    stringstream(mystr2) >> myint;
    cout << myint;

}