#include <iostream>
using namespace std;

void defaultPara(string s = "Bangladesh"){
    cout << "Contry: "<< s << "\n";
}

int main(){
    defaultPara("Bangladesh");
    defaultPara("India");
    defaultPara("United States");

    return 0;
}
