#include <iostream>
using namespace std;

class employee{
	protected:
		int salary;
};

class Programmer : public employee{
public:
	int bonus;
	void setsalary(int s){
		salary = s;
	}
	int getSalary(){
		return salary;
	}
};

int main(int argc, char const *argv[])
{
	Programmer myObj;
	myObj.setsalary(50000);
	myObj.bonus = 15000;

	cout << "Salary: "<< myObj.getSalary() <<"\n";
	cout << "Bonus: "<< myObj.bonus <<"\n";

	return 0;
}