
//a class is a template for objects, and an object is an instance of a class.
#include <iostream>
using namespace std;

class Car{
    public:
        string brand;
        string model;
        int year;
};

int main(){
    Car carObj;         //create an object
    carObj.brand = "Ford";
    carObj.model = "Mustang";
    carObj.year = 1969;

    Car carObj2;        //create another
    carObj2.brand = "BMW";
    carObj2.model = "X5";
    carObj2.year = 1999;

    cout << carObj.brand<<" "<<carObj.model<<" "<<carObj.year<<"\n";
    cout << carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.year<<"\n";

    return 0;
}
