#include <bits/stdc++.h>
using namespace std;

int main() {

	int i = -56;
	cout << abs(i) << '\n';		//absolute value - jai thak positive value return korbe
	double db = 43.500;

	cout << "floor(db) : "<< floor(db) << '\n';
	cout << "ceil(db) : "<< ceil(db) << '\n';		//floor(db) + 1 (if there's any digits after decimal point)
	cout << "round(db) : "<< round(db) << '\n';

	db = 5;
	cout << pow(db, 3) << '\n';

	cout << sqrt(25) << '\n';	// square root
	cout << cbrt(216) << '\n';	// cubic root

	int a = 56, b = 30;
	cout << max(a, b) << '\n';
	cout << min(a, b) << '\n';
	cout << min({56, 30, 30, 40, 12}) << '\n';	//2 er beshi element hole elementgulo {} er vitore rakhte hobe

	return 0;
}