#include<iostream>
#include <fstream>
using namespace std;

int main ()
{
	char s;
	ifstream newfile("z1.txt");
	while(newfile)
	{
		newfile.get(s);
		cout<<s;
	}
	cout<<endl<<"file read";
	return 0;
}
