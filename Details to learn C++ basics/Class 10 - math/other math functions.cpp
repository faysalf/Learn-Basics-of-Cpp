#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int y = -10;
    int x = 30;
    cout << abs(y) <<endl;
    cout << acos(x)<<endl;  //inverse cosine
    cout << atan(x)<<endl;
    cout << asin(x)<<endl;
    cout << cos(x) <<endl;
    cout << cosh(x)<<endl;  //hyperbolic cosine
    cout << sin(x)<<endl;
    cout << sinh(x)<<endl;
    cout << tan(x)<<endl;
    cout << tanh(x)<<endl;
    cout << " \n";

    cout << sqrt(x)<<endl;  //square root
    cout << cbrt(x)<<endl;  //cube root
    cout << ceil(x)<<endl;  //up nearest int
    cout << floor(x)<<endl;  //down nearest int
    cout << exp(x) <<endl;  // E**x
    cout << expm1(x)<<endl; //E**x -1
    cout <<" \n";

    cout << fabs(3.14159)<<endl; //absolute val of float
    cout << fdim(10,17)<<endl;  //positive difference between
    cout << hypot(3,4)<<endl;   //sqrt(x**2 + y**2)
    cout << fma(3,2,4)<<endl;   //x*y+z
    cout << fmax(10.2,13.1)<<endl; //float num max
    cout << fmin(10.2,13.1)<<endl; //float num min
    cout << fmod(10.2,2)<<endl;     //float num mod
    cout << pow(10,3) <<endl;       //power


return 0;
}
