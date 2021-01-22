#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
	char ch='p';
	int j=100;
	double d=8.2;
	char str1[]="Raja";
	char str2[]="Chowdhury";
	
	ofstream newfile ("z1.txt");
	newfile <<ch<<endl<<j<<endl<<d<<endl<<str1<<" "<<str2;
	cout <<"File written";
	return 0;
}
//file writing
