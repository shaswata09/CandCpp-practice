#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
	char str[]= "My name is Leonardo Jenson";
	ofstream newfile("pqr.txt");
	for (int j=0; j<sizeof(str); j++)
	{
		newfile.put(str[j]);
	}
	cout<<"file written";
	return 0;
}
