#include <stdio.h>

int main ()
{
	int a[25][4],i,j,f=0;
	for (i=0; i<25; i++)
	{
		for (j=0; j<4; j++)
		{
			a[i][j]=f;
		}
	}
	printf ("The locartion [12][3] in row major: %d\n",&a[12][3]);
	printf ("The locartion [12][3] in row major: %d", &a);
	return 0;
}
