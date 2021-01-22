#include <stdio.h>

int main ()
{
	int s=67, b=70,c;
	char buff[50];
	c=s+b;
	sprintf(buff,"sum of %d and %d = %d",s,b,c);
	printf("%s",buff);
	return 0;
}

//String printing
