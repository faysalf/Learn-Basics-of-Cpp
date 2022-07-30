#include <bits/stdc++.h>
using namespace std;

void print(vector<int>v) {
	for (int i:v) cout << i << ' ';
	cout << '\n';

}

int main() {

	// int arr[5];
	
	// for (int i=0; i<4; i++) {	//in 4 index, it store gurbadge value
	// 	cin >> arr[i];
	// }
	//for (auto res:arr) cout << res << ' ';

	vector<int> ve {1,2,3,4,5};		//vector<int> ve = {1,2,3,4,5};
	print(ve);


	vector<int> v(5);
	
	for (int i=0; i<4; i++) {	//data insert with declared vector size
		cin >> v[i];		//jodi array er ekti specific size declair thake
	}
	print(v);			//for (auto res:v) cout << res << ' ';

	// r jodi size declair na thake
	vector<int> vec;

	for (int i = 0; i<5; i++) {		//data insert for undeclaired vector size
		int m; cin >> m;
		vec.push_back(m);
	}
	print(vec);

	vec.pop_back();
	print(vec);

	vec.push_back(5);
	vec.push_back(10);
	vec.push_back(20);
	print(vec);

	vec.emplace_back(11);		//sheshe element add kora
	print(vec);

	auto siz = vec.size();
	cout << "Size of vector: "<< siz << '\n';

	// data accessing
	cout << vec[5] << '\n';				//access element by it's index
	cout << vec.at(5) << '\n';	

	cout << vec.front() << '\n';		//accessing first element
	cout << vec.back() << '\n';			//accessing last element


	vector<int> ar {6,7,3,58,9};
	vec = {5,8,2};

	print(ar);
	cout << *(ar.begin()) << '\n';	//position theke value pawar jonyo staric * use korte hoy
	cout << *(ar.end()-1) << '\n';
	cout << *(ar.end() - 3) << '\n';

	//ar.assign(vec.begin(), vec.end());	//ektar data gulo onyota rakhbe
	ar.push_back(20);
	ar.push_back(6);
	print(ar);

	ar.erase(ar.begin()+3);		//delete a element
	print(ar);

	ar.erase(ar.begin()+1, ar.begin()+3);	//shuru theke 2ta element delete
	cout << "ar: ";  print(ar);
	cout << "vec: "; print(vec);

	cout << "After swap: \n";
	ar.swap(vec);		//odol bodol kora
	cout << "ar: ";  print(ar);
	cout << "vec: "; print(vec);

	ar.clear();		//clear all the element
	print(ar);

	return 0;
}