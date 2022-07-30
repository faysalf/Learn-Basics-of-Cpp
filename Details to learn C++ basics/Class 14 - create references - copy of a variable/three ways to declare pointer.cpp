//There are three ways to declare pointer. 1st one is preferred

#include <iostream>;
using namespace std;

int main(){
    string mystr = "Hello";

    string* mystring; // Preferred
    //string *mystring;
    //string * mystring;

    cout << mystring;

    return 0;

}
