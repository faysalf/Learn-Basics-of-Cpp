#include <iostream>;
using namespace std;

int main(){
    string food = "Pizza";
    string* ptr = &food;    //pointer var declaration

    cout << ptr <<"\n";     //0x61fde0 = pointer for memory address by va
    cout << *ptr <<"\n";    //Pizza = * operator for value by memoty address

    return 0;
}
