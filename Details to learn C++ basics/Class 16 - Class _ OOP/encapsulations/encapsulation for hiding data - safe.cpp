#include <iostream>
using namespace std;

class Encapsulations{
private:
	int salary;

public:
	void setsalary(int s){
		salary = s;
	}
	int getSalary(){
		return salary;
	}
};

int main(int argc, char const *argv[])
{
	Encapsulations obj;
	obj.setsalary(20000);
	cout << obj.getSalary()<<"\n";
	return 0;
}