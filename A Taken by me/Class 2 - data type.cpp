#include <bits/stdc++.h>
using namespace std;

int main() {

	// data type : int , long long, float - double - string, char, bool.

	int n;
	n = 1000000000;		// if we use >1e9 then it'll return overflow
	cout << n << '\n';

	long long m = (long long) n * 10;	//1st long long for data type declaration, 2nd is return type
	cout << m << '\n';

	//Use double always for floating number.
	float fl = 23.56;
	cout << fl << '\n';

	double students_Marks = 3.96;
	cout << students_Marks << '\n';

	string str = "Brahmanbaria Polytechnic Institute";	//for single word or a sentence
	cout << str << '\n';

	str = "F";
	cout << str << '\n';

	char ch = 's';			//single character - between single coutation
	cout << ch << '\n';

	bool flag = false;		//true, flase (1, 0)
	cout << flag << '\n';

	return 0;
}
