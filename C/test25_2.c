#include<stdio.h>
#include<conio.h>
main()
{
	char gen[L_tmpnam+1];
	tmpnam(gen);
	puts(gen);
	getch();
	return 0;
}
