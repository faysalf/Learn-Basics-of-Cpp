//operator
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int a = 3, b = 5, c = 4;

// 	if (b > a and b > c) {
// 		cout << "B is greater\n";
// 	}
// 	if (c > b or c > a) {
// 		cout << "C is greater than b or a\n";
// 	}

// 	return 0;
// }



// Nested if - else

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (b > a) {
		if (b > c) {
			cout << "B sobcheye boro\n";
		}
		else {
			cout << "B shudhu A er cheye boro\n";
		}
	}
	else if (a > b) {
		if (a > c) {
			cout << "A sobcheye boro\n";
		}
		else {
			cout << "A just B er cheye boro\n";
		}
	}
	else {
		cout << "C sobcheye boro\n";
	}

	return 0;
}

