#include <bits/stdc++.h>
using namespace std;

void print(multiset<int>ml) {
    for (auto x:ml) cout << x << ' ';
    cout << '\n';
}

int main() {
    
    multiset<int> ms;
    
    ms.insert(5);
    ms.insert(4);
    ms.insert(6);
    ms.insert(5);
    
    print(ms);
    
    ms.erase(ms.find(5));
    print(ms);
    
    ms.insert(5);
    print(ms);              //for (auto i:ms) cout << i <<' ';
    
    ms.erase(5);
    print(ms);
    
    cout << "\n\n";
    
    
    int mat[3][4];      //matrix[row][column]
    
    //mat[0][0] = 10;
    
    //cout << mat[0][0] << '\n';
    
    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            cin >> mat[i][j];
        }
    }
    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';

    return 0;
}
