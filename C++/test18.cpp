#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
	string str;
	cout<<"Enter the string : ";
	cin>>str; 
    int n = str.length(); 
    char char_array[n+1]; 
    strcpy(char_array, str.c_str()); 
    
    for (int i=0; i<n; i++)
      cout << char_array[i];    
 
    return 0;
}
//input a string and convert it to char array
