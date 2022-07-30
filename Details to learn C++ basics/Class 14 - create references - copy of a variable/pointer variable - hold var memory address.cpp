#include <iostream>
using namespace std;

int main(){
    string food = "Pizza";

    string* ptr = &food;    //a pointer var hold both int and string data

    cout << ptr;    //0x61fde0

return 0;
}
