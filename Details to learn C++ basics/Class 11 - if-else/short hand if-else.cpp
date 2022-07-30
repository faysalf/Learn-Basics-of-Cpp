#include <iostream>
using namespace std;

int main(){
    int time = 20;

    // if time <18 cout gd day, else gd evening

    string res = (time<18) ? "Good Day." : "Good evening";
    cout << res;

    return 0;
}

