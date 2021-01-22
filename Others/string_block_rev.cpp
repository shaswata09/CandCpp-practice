#include <stdio.h>
#include <string.h>

int main ()
{
	int i,j,k,flag,n,len;
	char str[20],tmp;
	printf ("Enter the String...");
	scanf("%s",&str);
	printf("Enter the segment length...:");
	scanf("%d",&n);
	len=strlen(str);
	if(n>len || n==0)
	{
		printf("\nSegment length is INVALID!!!\n Please try again!!!");
		return 0;
	}
	else
	{
		flag=0;
		if(len%n>0)
			k=len/n+1;
		else
			k=len/n;
			
		for (i=0; i<k-1; i++)
		{
			for(j=0; j<(n/2); j++)
			{
				tmp= str[flag+j];
				str[flag+j]= str[flag+n-j-1];
				str[flag+n-j-1]=tmp;
			}
			flag+=n;
		}
		for(j=0; j<(len-flag)/2; j++)
		{
			tmp= str[flag+j];
			str[flag+j]= str[len-1-j];
			str[len-1-j]=tmp;
		}
	}
	printf("\nThe Result String is...: %s",str);
	return 0;	
}
