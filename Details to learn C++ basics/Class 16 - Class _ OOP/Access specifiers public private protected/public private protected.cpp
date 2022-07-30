//public - access by any class
//private - can't access
//protected - can't access but accessable in inheritance
#include <iostream>
using namespace std;

class myClass{

public:
	int x;
private:
	int y;
};
int main(int argc, char const *argv[])
{
	myClass myObj;
	myObj.x = 10;
	myObj.y = 20;	//error cause this data is private
	return 0;
}