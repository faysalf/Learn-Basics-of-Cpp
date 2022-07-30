//a class is a template for objects, and an object is an instance of a class.
#include <iostream>
using namespace std;

class myClass{  //class
    public:
        int myNum;
        string myString;
};

int main(){
    myClass myObject;   //object create

    myObject.myNum = 165091;
    myObject.myString = "Text";

    cout << myObject.myNum << "\n";
    cout << myObject.myString<<endl;

    return 0;
}
