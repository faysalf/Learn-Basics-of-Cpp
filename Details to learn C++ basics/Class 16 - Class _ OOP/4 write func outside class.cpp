#include <iostream>
using namespace std;

class myClass{
public:
    void myFunc();
};

void myClass :: myFunc(){
    cout << "Hello! This is Faysal.\n";
}

int main(){
    myClass obj;
    obj.myFunc();

    return 0;
}
