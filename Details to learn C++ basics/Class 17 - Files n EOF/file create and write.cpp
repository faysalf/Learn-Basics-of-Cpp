//ofstream - create and write
//ifstream - read from file
//fstream - a combination of ofstream and ifstream
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream myFile("fileName.txt");	//created
	myFile << "Hello! for create a file it's enough!"; //write

	myFile.close(); //created. but ther's no output


//Now created file will be read by ifstream:

	string readText;

	ifstream readFile("fileName.txt");

	while (getline(readFile, readText)){
		cout << readText;
	}
	readFile.close();	//close it after read/print data of file
	return 0;
}