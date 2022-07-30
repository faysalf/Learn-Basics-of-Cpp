#include <iostream>
using namespace std;

int main(){
    int x = 5;
    cout << x << endl;

    x += 5;     //10
    cout << x <<endl;

    x -= 5;     //5
    cout << x << endl;

    x *= 4;     //20
    cout << x << endl;

    x /= 2;     //10
    cout << x << endl;

    x %= 6;     //4
    cout << x << endl;

    x &= 4;     //4 = 100 & 100 = 100 and
    cout << x << endl;

    x |= 4;     //4 = 100 | 100 = 100 or
    cout << x << endl;

    x ^= 4;     //0 = reverse of and operator
    cout << x << endl;

    x = 12;
    x >>= 3;    //0 = right shift = 1001>>3 = 0001(001 bad)
    cout << x << endl;

    x <<= 4;    //16 = left = 0001<<4 = 10000
    cout << x << endl;

    return 0;
}
