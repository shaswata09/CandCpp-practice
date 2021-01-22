#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
	char str1[80];
	ifstream newfile("pqr.txt");
	while(!newfile.eof())
	{
		newfile.getline(str1,80);
		cout<<str1<<endl;
	}
	return 0;
}
