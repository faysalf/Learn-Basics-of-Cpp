#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// vactor<pair<int, int>> v;
	map<int, int> m;

	m[0] = 10;
	cout << m[0] << '\n';

	int arr[9] = {0,0,0,0,0,0,0,0,9};

	map<int, double> mp;
	
	mp[8] = 9;

	int roll; cin >> roll;
	cout << mp[roll] <<'\n';

	// if (mp[roll] != 0) cout << mp[roll] << '\n';
	// else cout << "Sorry! apni fail korechhen\n";

	map<string, long long> st;
	st["BBPI"] = 123456789123;

	cout << st["BBPI"] << '\n';



	map<int, int> vp;
	vp[5] = 10;
	vp[6] = 12;
	vp[7] = 14;
	vp[10] = 20;

	//insert
	vp.insert({4, 8});		//vp[4] = 8
	cout << vp[4] << '\n';

	vp.emplace(2, 4);		//vp[2] = 4
	cout << vp[2] << '\n';

	for (auto it = vp.begin(); it != vp.end(); it++) {	//iterator diye
		cout << it->first <<' '<< it->second << '\n';
	}
	cout << '\n';

	for (auto [i,j]:vp) {			// easy way
		cout << i << ' '<< j << '\n';
	}
	cout << '\n';
	
	cout << vp.empty() << '\n';	//khali ki na

	cout << vp.size() << '\n';  //for size

	cout << vp.max_size() << '\n';	

	vp.erase(2);			//for erase/delete a data
	cout << vp[2] << "\n\n";

	vp.erase(vp.find(6), vp.end());	//erase by a range
	cout << vp[6] << '\n';		//vp[6] = 0

	map<int, int> fp;
	fp[5] = 10;

	vp.swap(fp);

	for (auto [i,j]:fp) cout << i << ' '<< j << '\n';

	vp.clear();		//map theke sob data remove kore dewar jonyo
	for (auto [i,j]:vp) cout << i << ' ' << j << '\n';

	vp = fp;
	
	cout << vp.count(4)<< '\n';
	

	return 0;
}