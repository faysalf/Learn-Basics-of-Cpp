#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	char s[] = "Mango";
	char s2[50];

	do {
		cin >> s2;
	}
	while (strcmp(s, s2) != 0);
	cout << "Both are same\n";

	return 0;
}