#include <iostream>
using namespace std;

int main(){
    int x;
    int y;
    cout << "Enter X: ";
    cin >> x;
    cout << "Enter Y: ";
    cin >> y;

    if (x>y){
        cout << "X is greater than y"<<endl;
    }
    else if (x<y){
        cout << "X is less than y"<<endl;
    }
    else{
        cout << "X is equal to y";
    }

    return 0;
}

