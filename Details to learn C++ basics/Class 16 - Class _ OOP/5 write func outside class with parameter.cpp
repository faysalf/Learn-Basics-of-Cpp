#include <iostream>
using namespace std;

class Car{
    public:
        int speed(int maxSpeed){
            return maxSpeed;
    }
};

int main(){
    Car obj;
    cout << obj.speed(150) <<"\n";

    return 0;
}
