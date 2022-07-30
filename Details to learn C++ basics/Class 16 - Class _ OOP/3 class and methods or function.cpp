#include <iostream>
using namespace std;

class myClass{
    public:
        void myMethod(){
            cout << "hello world\n";
        }
};

int main(){
    myClass obj;
    obj.myMethod();

    return 0;
}
