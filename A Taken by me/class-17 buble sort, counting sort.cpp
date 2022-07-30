/*// Bubble sort

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = 1e5 + 7;
int arr[N];


int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<n; i++) {
        for (int j = 0; j<n-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for (int i=0; i<n; i++) cout << arr[i] << ' ';
    cout << '\n';
    
    return 0;
}
*/


//Counting sort

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = 1e3+5;      // value <= 1e3
int arr[N], cnt[N] = {0};

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<n; i++) {
        cnt[arr[i]]++;
    }

    for (int i=1; i<N; i++) {
        for (int j=0; j<cnt[i]; j++) {
            cout << i << ' ';
        }
    }

    return 0;
}