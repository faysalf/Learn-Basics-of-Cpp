#include <bits/stdc++.h>
using namespace std;

int main() {

	int t; cin >> t;

	//for (int i=0; i<t; i++)
	while (t--) { 		// 5 = 5 4 3 2 1
		int n; cin >> n;

		if (n%2==0) cout << "Even\n";
		else cout << "Odd\n";
	}

	// int t = 0;

	// if (t) cout << "it's not 0\n";
	// else cout << "it's 0\n";

	for (int i=0; i<10; i++) {
		if (i == 5) continue;		//continue = kono specific data skip kora, break = loop break kora
		else cout << i << ' ';
	}

	return 0;
}