#include <iostream>
using namespace std;

class GrandParents{
public:
	void print(){
		cout << "GrandParents\n";
	}
};

class myParents{
public:
	void printparents(){
		cout << "Parents\n";
	}
};

class myMine : public GrandParents, public myParents{
public:
	void printMine(){
		cout << "Me and Mine\n";
	}
};

int main(int argc, char const *argv[])
{
	myMine obj;
	obj.print();
	obj.printparents();
	obj.printMine();
	return 0;
}