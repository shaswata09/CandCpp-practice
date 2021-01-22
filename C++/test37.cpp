#include <stdio.h>
#include <string.h>

int main ()
{
	int len,len1,max,i,x,x1,x2,carry=0;;
	char ch[100],ch1[100];
	int arr[100],arr1[100],res[101];
	printf ("Enter 1st the value: ");
	gets(ch);
	printf ("Enter 2nd the value: ");
	gets(ch1);
	len=strlen(ch);
	len1=strlen(ch1);
	max=len>len1?len:len1;
	x=len-1;
	x1=len1-1;
	x2=max;
	for(i=0; i<=x; i++)
	{
		arr[i]=((int)ch[i]-48);
	}
	for(i=0; i<=x1; i++)
	{
		arr1[i]=((int)ch1[i]-48);
	}
	for(i=0; i<101; i++)
		res[i]=0;
		
	printf("\n 1st number is: ");
	for(i=0; i<=x; i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n 2nd number is: ");
	for(i=0; i<=x1; i++)
	{
		printf("%d",arr1[i]);
	}
	printf("\n\n");	
	for(i=max-1; i>=0; i--)
	{
		if(x>=0 && x1>= 0)
		{
			res[i]=(arr[x]+arr1[x1]+carry)%10;
			carry=(arr[x]+arr1[x1]+carry)/10;
			x--;	x1--; 
		}
		else if(x>=0 && x1<0)
		{
			res[i]=(arr[x]+carry)%10;
			carry=(arr[x]+carry)/10;
			x--;
		}
		else if(x<0 && x1>=0)
		{
			res[i]=(arr[x1]+carry)%10;
			carry=(arr[x1]+carry)/10;
			x1--;
		}

	}
	printf("%d",carry);
	for(i=0; i<max; i++)
	{
		printf("%d",res[i]);
	}
	
	return 0;
}
