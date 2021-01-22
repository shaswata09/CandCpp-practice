#include <stdio.h>

int digisum(int n){
	int s=0;
	if((n/10)>0){
		s=n%10+digisum(n/10);
		return s;
	}
	else{
		return n;
	}
}

int finalsum(int n){
	int s;
	s=digisum(n);
	if(s>9){
		s=finalsum(s);
		return s;
	}
	else{
		return s;
	}
}

int main (){
	int n,s=0;
	printf("Enter the number:");
	scanf("%d",&n);
	s=finalsum(n);
	printf("Digit sum is: %d",s);
	return 0;
}


