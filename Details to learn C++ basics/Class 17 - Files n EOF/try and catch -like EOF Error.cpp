#include <iostream>
using namespace std;

int main()
{
	try{				//try if works
		int age = 15;
		if (age>=18){
			cout << "Success! You can perform to vote.\n";
		}
		else{
			throw(age);		//if problem is detected, it works
		}
	}
	catch (int myNum){		//this parameter is for catch
		cout << "Access denied - you're not eligible.\n";
		cout << "Age is: " << myNum <<endl;
	}
	return 0;
}