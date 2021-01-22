#include <stdio.h>

int main ()
{
	int a, m=1;
	printf("Enter the value : ");
	scanf("%d",&a);
	a=(a<<1)+(~a);
	printf("\nThe value is: %d ",a);
	return 0;
}
//Subtraction without using arithmatic operator. Bitwise operation
