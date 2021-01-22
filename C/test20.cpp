#include <stdio.h>

union temp {
	long a;
	char b[3];
};
temp t;
int main ()
{
	temp t;
	int *p;
	t.a=131071;
	printf ("%d\n",t.b[0]);
	printf ("%d\n",t.b[1]);
	printf ("%d",t.b[2]);
	return 0;
}
