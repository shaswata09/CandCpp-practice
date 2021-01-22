#include<stdio.h>
#include<conio.h>
main()
{
	char ch='\r';
	
	if(isprint(ch))
	printf("%c is printable character",ch);
	else 
	printf("%c is non printable  character",ch);
	if(iscntrl(ch))
	printf("\n%c is a control character",ch);
	else 
	printf("\n%c is printable not control char",ch);
	getch();
	return 0;
}

