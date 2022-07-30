#include <bits/stdc++.h>
using namespace std;

int main() {

	//ASCII value
	char s = 'a';
	cout << (int) s <<'\n';

	int n = 4;

	int result = n / 5;

	int mod = n % 5;

	// even odd number
	if (n%2 == 0) {
		cout << "Even number\n";
	}
	else {
		cout << "Odd number\n";
	}

	cout << result << '\n';
	cout << mod << "\n\n";

	n = 12;

	int andd = n & 4;

	// 12  = 1 1 0 0
	// 4   = 0 1 0 0
	// ----------------
	// 4   = 0 1 0 0

	cout << andd << '\n';

	// or != |
	// and != &
	// and = &&
	// or = ||

	int orr = n | 4;

	// 12  = 1 1 0 0
	// 4   = 0 1 0 0
	// ----------------
	// 12  = 1 1 0 0

	cout << orr << '\n';

	n &= 4;			// n |= 4;
	cout << n << "\n\n";

	// Comparison operator
	int m = 34;

	cout << (m < 30) << '\n';
	cout << (m <= 30) << '\n';

	cout << (m > 34) << '\n';
	cout << (m >= 34) << '\n';

	cout << (m == 30) << '\n';
	cout << (m == 34) << '\n';

	cout << (m != 30) << '\n';
	cout << (m != 34) << "\n\n";

	
	// Logical operator
	cout << (m < 34 && m==34) << '\n';		// 2 tai true hote hobe
	cout << (m < 34 || m == 34) << '\n';	// jekono ekta true holee hobe
	cout << (!(m == 34 && m < 30)) << '\n';	// 2 tae false hote hobe

	return 0;
}