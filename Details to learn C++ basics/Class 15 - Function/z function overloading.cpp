#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}
double add(double a, double b){
    return a+b;
}
int add(int a, int b, int c){
    return a+b+c;
}

int main(){
    cout << add(10,20)<<"\n";
    cout << add(10.5,19.5)<<"\n";
    cout << add(100,200,300);

    return 0;
}
