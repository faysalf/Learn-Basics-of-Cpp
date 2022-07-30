#include <iostream>
using namespace std;

class Car{
	public:
		string brand;
		string model;
		int year;

		Car(string a, string b, int c){
			brand = a;
			model = b;
			year = c;
		}
};

int main(int argc, char const *argv[])
{
	Car myObj("BMW","X5",1999);
	Car myObj2("Ford","Mustang",1969);

	cout << myObj.brand<<" "<<myObj.model<<" "
	<<myObj.year<<"\n";
	cout << myObj2.brand<<" "<<myObj2.model<<
	" "<<myObj2.year<<endl;

	return 0;
}