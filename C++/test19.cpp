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
	{
		if(nm[i]<='z' && nm[i]>='a')
			nm[i]-=32;
		i++;
	}
					
	i=0;		
	while(nm[i]!='\0')
	{
		cout<<nm[i];
		i++;
	}		
	return 0;
}
//convert string to uppercase without library function.
