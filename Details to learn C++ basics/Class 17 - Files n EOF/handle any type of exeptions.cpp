#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	try{
		int age = 15;
		if (age>=18){
			cout << "Accessed successfully.";
		}
		else{
			throw 505;
		}
	}
	catch (...){
		cout << "Access denied!\n";
		return 0;
	}
}