//when we didn't take namespace, we need to declare std::

/*
#include<iostream>
int main(){
    std::cout << "Hello C++ Programming" << "\n";
    return 0;
}
*/
//using namespace, for that we needn't take std::

#include <iostream>     //<bits/stdc++.h> also we can write this istead of
using namespace std;

int main(){
    cout << "Hello World!\n";  //cout (output) - read see out
    return 0;
}
