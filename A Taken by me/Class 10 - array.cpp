#include <bits/stdc++.h>
using namespace std;

int main() {

	int arr[5] = {1,2,3,4,5};
	cout << arr[0] << '\n';			//access way
	cin >> arr[4];

	int ar[] = {1,9,4,7,3,5};

	int size = sizeof(ar) / sizeof(ar[0]);	//size
	cout << size << '\n';


	for (int i=0; i < size; i++) {	//for print all of array data
		cout << ar[i] << ' ';
	}
	cout << '\n';

	if (size == 0) cout << "Empty\n";	//is array empty of not? = অ্যারে খালি কি না
	else cout << "Empty na\n";

	auto m = find(ar, ar+size, 7);	//if 7 is available in ar = ৭ আছে কি না?
	cout << *m << '\n';

	int n = distance(ar, find(ar, ar+size, 3));	//index
	cout << n << '\n';

	int ind = 0;
	for (int i=0; i < 6; i++) {		//find a value of array index by using loop = কোন ভ্যালুর ইনডেক্স বের করণ
		if (ar[i] == 3) break;
		ind++;
	}
	cout << ind << '\n';

	sort(ar, ar+size);					//sort in increasing order = ছোট থেকে বড়
	for (auto i:ar) cout << i << ' '; 	//short way to print first to last element of an array
	cout << '\n';

	sort(ar, ar+size, greater<int>());	//sort in decreasing order = বড় থেকে ছোট
	for (auto i:ar) cout << i << ' ';
	cout << '\n';

	int a[10];

	for (int i=0; i<10; i++) {		//user input array
		cin >> a[i];
	}

	for (auto i:a) cout << i << ' ';


	return 0;
}