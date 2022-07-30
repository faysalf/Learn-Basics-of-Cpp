#include <iostream>
using namespace std;

int main(){
    int t;
    int x;
    int cou;
    int n;
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> x;
        cou = 0;

        n = x-1;
        int r = 0;
        for (int j=1; j<(n/2)+2; j++){
            if (n%j == 0){
                cou += 1;
            }
            r = j;
        }
        if (r != n){
            cou += 1;
        }
        cout << cou <<"\n";
    }
return 0;

}
