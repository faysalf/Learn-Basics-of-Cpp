#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int i = 0;

	while (i <= 10) {
		cout << i << '\n';
		i++;
	}

	cout << "\n2nd while loop\n\n";

	i = 10;
	while (i >= 0) {
		cout << i << '\n';
		i--;
	}

	cout << "\nSum from 1 to N\n\n";

	int n = 10, sum = 0;
	i = 1;
	while (i <= n) {
		sum += i;
		i++;
	}
	cout << "Sum = " << sum << '\n';

	return 0;
}