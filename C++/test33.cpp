#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
	char ch;
	int j;
	double d;
	char str1[30],str2[30];
	
	ifstream newfile ("z1.txt");
	newfile >>ch>>j>>d>>str1>>str2;
	cout <<"File read"<<endl;
	cout <<ch<<endl<<j<<endl<<d<<endl<<str1<<" "<<str2;
	return 0;
}
//file writing
