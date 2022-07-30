/* //add, sub, mul, div, mod

#include <bits/stdc++.h>
using namespace std;

int main() {

	int a, b, c;

	cin >> a >> b;		//a=1000009, b = 1000009

	c = a + b;
	cout << c << '\n';
	cout << (long long) a * b << '\n';
	cout << a-b << '\n';
	cout << (double) a/b << '\n';
	cout << a%b << '\n';
	
	return 0;
}*/



/* //constant int (dhrubok data)

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 50;
	cout << "previous upd: "<< n << '\n';

	n += 2;			//same to n = n+2

	cout <<"After upd: "<< n << '\n';

	n = 60;
	cout << "Latest store data "<< n << '\n';

	const int m = 99;
	cout <<"m = " << m << '\n';
	
	// m = 2;				// should error!
	cout << m << '\n';

	const double d = 34.56;
	cout << "d = " << d << '\n';

	return 0;
}*/

// setprecision - after doshomik how much will show

#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	double d = 5.6778889876596;

	// printf("%.10f\n", d); 	// function of C

	cout << setprecision(10) << d << '\n'; 	//jodi totally >=10 number thake 10ta nibe

	cout << fixed << setprecision(10) << d << '\n';	// jodi doshomiker por >=10 ta number thake tahole doshomiker por 10ghor nibe

	d = 5.677;
	cout << setprecision(10) << d << '\n';	// jodi 10tar cheye kom thake tahole nibena

	cout << fixed << setprecision(10) << d << '\n'; // 7ta 0 diye fill up kore dibe

	return 0;
}