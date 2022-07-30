#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string str = "madam";

	cout << str << '\n';

	// string reverse

	reverse(str.begin(), str.end());
	cout << str << '\n';

	//varialbeName[index];
	cout << "str[4]= "<< str[4] << '\n';	//access

	// value update
	str[4] = 'N';
	cout << "str[4]= "<< str[4] << '\n';

	int a = 20, b = 22;
	cout << a+b << '\n';

	string s = "Maruf", s2 = "Ismail";
	cout << s + s2 << '\n';

	s += " From BBPI";	//string add
	cout << s << '\n';

	char ch = '.';		//string ch = "6424";
	s += ch;
	//s = s + ch;		// use s += ch instead of it
	cout << s << '\n';

	string ss = "";
	cout << "Before append: "<< ss << '\n';
	
	ss.append("Brahmanbaria");
	cout << "After Append: " << ss << '\n';

	ss.append(" Polytechnic").append(" Institute");	//multiple append
	cout << ss << '\n';

	// string ff = "BBPI - ";
	// ff += ss;

	ss = "BBPI- " + ss;		// string er shurute arekti str add kora
	//string stri = "BBPI - " + ss;
	cout << ss << '\n';

	//String copy
	s = "BBPI";
	string st = s;

	s += '.';	
	cout << st << '\n';

	// String size
	s = "Brahmanbaria Polytechnic Institute";
	int sz = (int) s.size();		// (int) it's an optional
	cout << sz << '\n';

	int n = 5286;
	string sr = to_string(n);			// int to string convert
	cout << sr << ' '<< sr[3] << '\n';

	sr = "5486";

	n = stoi(sr);			// string to int convert
	cout << n + 2 << '\n';

	string bbpi;
	//getline(cin, variableName);
	getline(cin, bbpi);			// new line er agporjonto user input
	cout << bbpi << '\n';

	return 0;
}