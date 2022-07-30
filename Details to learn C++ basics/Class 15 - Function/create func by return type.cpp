#include <iostream>
using namespace std;

string Greater(int a, int b){
    if (a>b){
        return "A is greater\n";
    }
    else if (a<b){
        return "B is greater\n";
    }
    else{
        return "A is equal to B";
    }
}

int main(){
    cout << Greater(90,89);
    return 0;
}
