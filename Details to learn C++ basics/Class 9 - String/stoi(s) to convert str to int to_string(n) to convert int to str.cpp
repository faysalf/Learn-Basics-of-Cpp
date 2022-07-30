#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a = 2345;
	string s = to_string(a);

	cout << s << '\n';

	int integer = stoi(s);

	//For char to int
	int n = '6';
	cout << n <<'\n'<< n - 48 << '\n';		//get exact value, minus 0

	cout << integer / 10;

	return 0;
}