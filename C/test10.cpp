#include <stdio.h>

int main ()
{
	int a, m=1;
	printf("Enter the value : ");
	scanf("%d",&a);
	while(!(a&m))
	{
		a=a^m;
		m=m<<1;
	}
	a=a^m;
	printf("\nThe value is: %d ",a);
	return 0;
}
//Subtraction without using arithmatic operator. Bitwise operation
