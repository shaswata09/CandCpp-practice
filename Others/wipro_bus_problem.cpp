#include <stdio.h>

int main ()
{
	int n, arr[2][10],i;
	printf("Enter number of buses...:");
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		printf("--------Enter values for Bus No...: %d------------\n",i+1);
		printf("Starting Point: ");
		scanf("%d",&arr[0][i]);
		printf("Ending Point: ");
		scanf("%d",&arr[1][i]);
	}
	printf("\nThe buses are : \n");
	for(i=0; i<n; i++)
	{
		printf ("[%d, %d]\t",arr[0][i],arr[1][i]);
	}
	printf ("\n Common Bus routes found...:");
	for (i=0; i<n-1; i++)
	{
		
	}
	
	return 0;
}
