#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
	
	//test case untill EOF (End of file)
	int n;
	/*while (cin >> n) {			// 5, 2, 3, 4, 5, 6, 7, ''
		cout << n << '\n';
	}*/
	
	//test case untill a < 1 or b < 1
	/*int a, b;
	while (cin>>a>>b && a>0 && b>0) {

		cout << a << ' '<< b << '\n';
	}*/
	/*
	5 4
	3 2
	6 5
	9 8
	2 -1*/


	//int user input with string like 08 : 12 : 23

	int da, hh, mm, ss;
	//scanf("Dia %d",&da);			//single user input in C

	string s;

	/*getline(cin, s);
	string h = s.substr(5,3);	//5 index er por theke 3ti nibe
	cout << h << '\n'; */

	scanf("%d : %d : %d", &hh, &mm, &ss);

	printf("%d\n", mm);		//scanf er jonyo printf, cin er jonyo cout



	/* Bank Notes - URI Problem

	n = 573		// 100, 50, 20, 10, 5, 2, 1

	m = n/100 //5
	cout << "100 dea nota de : " << m << '\n';

	n %= 100 	// 73

	m = n / 50  // 1
	cout << "50 taka nota de : " << m << '\n';

	n %= 50;
	...*/


	//Uri problem 1145
	/*int count = 0;
	for (int i=1; i<100; i++) {
		if (count == 3) {
			count = 0;
			cout << '\n';
		}
		cout << i <<' ';
		count++;
	}*/

	/*for (int i=1; i<100; i++) {

		cout << i <<' ';

		if (i%3==0) cout << '\n';
	}*/


	return 0;
}