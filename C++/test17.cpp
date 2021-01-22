#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
	char nm[30];
	cout<<"Enter the string : ";
	cin.get(nm,30);
	int i=0;
	while(nm[i]!='\0')
		i++;
	cout<<"\nThe string is of length : "<<i;
	cout<<"\nThe array is of size : "<<sizeof(nm);
	return 0;
}
//input a string and calculate the string length without using strlen
