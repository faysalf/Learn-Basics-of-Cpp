#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v) {
	for (auto i:v) cout << i << ' ';
	cout << '\n';
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v {1,2,3,4,5}, vecc {6,7,8};

	print(v);				//for (auto i:v) cout << i << ' ';
	v.assign(vecc.begin(), vecc.end());
	print(v);	//should be fully update by vec
	print(vecc);
	
	//size dewa thakle, use index; otherwise push_back() - for vector
	
	vector <int> ve(3); //{0,0,0,20}
	ve.push_back(20);
	for (auto i:ve) cout << i << ' ';
	cout << '\n';

	cin >> v[0] >> v[1] >> v[2];	//v[0] = 1; v[1] = 10 - directly data rakha
	for (int i:v) cout << i << '\n';

	pair<int, int> p, p1, p2, p3;
	p = make_pair(10, 29);
	p1 = make_pair(500, 1000);
	p2 = make_pair(11, 12);

	cout << p.second << ' '<< p.first <<'\n';
	cout << p2.first << ' '<< p2.second << '\n';

	p3.first = 20;
	p3.second = 30;

	cout << p3.first << ' '<< p3.second << '\n';

	pair<string, double> res;
	res = make_pair("BBPI", 3.85);

	cout << "Name: "<< res.first << '\n'<<"Marks: "<< res.second<<'\n';

	vector<pair<int, int>> va(3);	//{(10,20), (11,21), (20,30)}

	va[0] = make_pair(10, 20);
	va[1] = make_pair(11, 21);
	va[2] = make_pair(20, 30);

	cout << va[0].first << ' '<<va[1].second << '\n';

	// {v[0], v[1], v[2], v[3]}
	//{(1,6),(2,7),(3,3),(5,10)}

	int n = 5;
	vector<pair<int, int>> vec(n);	//vector_name(vector_size)
	for (int i=0; i<n; i++) {
		cin >> vec[i].first >> vec[i].second;
	}
	for (int i=0; i<n; i++) {
		cout << vec[i].first << ' '<< vec[i].second<< '\n';
	}

	vector<pair<int, int>> vf;		//size chhara
	vf.push_back(make_pair(10,20));

	cout << vf[0].first << '\n';

	return 0;
}