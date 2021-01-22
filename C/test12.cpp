#include <stdio.h>

int main ()
{
	int a, m=1;
	printf("Enter the value : ");
	scanf("%d",&a); 
	(a&1 && printf ("odd no")) || printf("even no");
	return 0;
}
//even or odd without using bit wise operator.
