#include <iostream>
using namespace std;

int main(){
    int day = 4;
    switch (day){
        case 1:
            cout << "Saturday";
            break;
        case 2:
            cout << "Sunday";
            break;
        case 3:
            cout << "Monday";
            break;
        default:
            cout << "This day is forward of Monday";
    }
return 0;
}
