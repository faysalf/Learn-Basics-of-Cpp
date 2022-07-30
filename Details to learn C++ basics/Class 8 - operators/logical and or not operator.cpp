#include <iostream>
using namespace std;

int main(){
    int a = 10;

    cout <<"and oper: "<<(a>5 && a>=10) << endl;
    cout <<"or oper: "<<(a>5 || a>=10) << endl;
    cout <<"Not oper: "<< !(a>5 && a>=10) << endl;
    return 0;
}
