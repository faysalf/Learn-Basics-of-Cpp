

// Contest 1 : problem 4 solution -

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	int n; cin >> n;

// 	int a, b, c;

// 	a = n%10;

// 	b = n/10;	//56

// 	c = b / 10;

// 	cout << a << '\n';
// 	cout << b%10 << '\n';	// 6
// 	cout << c << '\n';

// 	// cout << n/100 << ' '<< n/10 %10 << ' ' << n%10 << '\n';

// 	return 0;
// }


// if (condition) {
// 	// Statements
// }
// else if (condition) {
// 	// Statements
// }
// else {
// 	// Statements
// }


#include <bits/stdc++.h>
using namespace std;

int main() {

	int n; cin >> n;	// equal, less or greater than 10

	if (n > 10) {
		cout << "N is greater than 10\n";
	}
	else if (n < 10) {
		cout << "N is less than 10\n";
	}
	// else if (n == 10) {
	// 	cout << "N is equal to 10\n";
	// }
	else {
		cout << "N is equal to 10\n";
	}

	return 0;
}