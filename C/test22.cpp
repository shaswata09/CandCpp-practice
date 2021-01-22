#include <stdio.h>
#include<string.h>

int main ()
{
	char st[]="shaswata mitra";
	char ch='m', ch2='a', ch3='l',ch4='s';
	char *val;
	val=strrchr(st,ch);
	printf("String after last %c is : %s \n",ch,val);
	val=strrchr(st,ch2);
	printf("String after last %c is : %s \n",ch,val);
	val=strrchr(st,ch3);
	printf("String after last %c is : %s \n",ch,val);
	val=strrchr(st,ch4);
	printf("String after last %c is : %s \n",ch,val);
	return 0;
	
}
