#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s = "Faysal";

    const auto f = s.find('y');

    if (f != string::npos) {
        cout << "Yes it has\n";
    }
    else cout << "No\n";

    return 0;
}