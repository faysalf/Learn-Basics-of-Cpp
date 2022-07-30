#include <iostream>
using namespace std;

int main(){
    int x, y;
    x = 10;
    y = 6;
    int mx = max(x,y);
    int mn = min(x,y);
    cout << "maximum between x & y: " << mx<<endl;
    cout <<"minimum between x & y: " << mn <<endl;
    return 0;
}
