#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int i;
	printf ("The series is...:\n");
	for(i=1; i<11; i++ )
	{
		if (i==5)
			continue;
		else
			printf("\t%d",i);
	}
	return 0;
}
