#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
	char nm[30];
	cout<<"Enter the string : ";
	cin.get(nm,30);
	cout<<"\nThe string is of length : "<<strlen(nm);
	cout<<"\nThe array is of size : "<<sizeof(nm);
	return 0;
}
//input a string and calculate the string length
