#include <iostream>
using  namespace std;

class myClass{
	public:
		myClass(){
			cout << "hello world!"<<"\n";
		}
};

int main(int argc, char const *argv[])
{
	myClass obj;

	return 0;
}