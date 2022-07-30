//for declaring constant variable,use const

#include <iostream>
using namespace std;

int main(){
    const int myNum = 15;
    myNum = 10      //error occurred. cause I was trying to override this variable

    cout << myNum;
    return 0;
}
