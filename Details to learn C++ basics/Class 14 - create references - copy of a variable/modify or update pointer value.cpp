#include <iostream>;
using namespace std;

int main(){
    string food = "Pizza";
    string* ptr = &food;    //pointer var declaration

    cout << *ptr <<"\n";    //value by pointer declaration

    *ptr = "Burger";    //besides ptr, main val also be update

    cout << *ptr <<"\n";    //Burger
    cout << food <<"\n";    //Burger

    return 0;
}
