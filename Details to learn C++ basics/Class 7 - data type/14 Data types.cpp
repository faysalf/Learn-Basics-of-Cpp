#include <iostream>
using namespace std;

int main(){
    int myNum = 5;
    float myFloat = 3.90;    //float has 6/7 digit after point
    double myDoubleNum = 3.86; //double has 15+ digiy
    char myLetter = 'F';
    string myText = "Faysal Ahmed";
    bool myBool = true;

    cout << "MyFloat: " << myFloat << endl;

    int userInp, roll, reg;

    cout << "Enter a number: ";
    cin >> userInp;
    cin >> roll;
    cin >> reg;

    cout << "user input: "<< userInp <<" "<< reg << endl;
    return 0;

}
