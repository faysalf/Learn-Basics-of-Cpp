#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b){ //created with refence. without this we can
    int z = a;
    a = b;
    b = z;
}
int main(){
    int num1 = 10;
    int num2 = 20;

    cout << "Before swap: \n";
    cout << num1 <<" "<< num2;

    swapNumbers(num1,num2);
    cout << "\nAfter swaping: \n";
    cout << num1 <<" "<< num2 <<"\n";

    return 0;

}
