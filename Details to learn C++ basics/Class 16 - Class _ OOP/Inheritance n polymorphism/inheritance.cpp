#include <iostream>
using namespace std;

class Vehicle{
public:
	string brand = "Ford";

	void Start(){
		cout << "Tuut, tuut, tutuut, tut!\n";
	}
};

class Car: public Vehicle{
public:
	string model = "Mustang";
};

int main(){
	Car myCar;
	myCar.Start();
	cout << myCar.brand+" "+myCar.model<<"\n";

	return 0;
}