#include <iostream>
using namespace  std;
void prntchar ( char ='*', int=45);

int main ()
{
	prntchar();			//print 45 *
	cout<<endl;
	prntchar('=');		//print 45 =
	cout<<endl;
	prntchar('?',30);  	//print 30 ?
	return 0;
}


void prntchar(char ch, int n)
{
	for (int i=1; i<=n; i++)
		cout<<ch<<" "<<n<<" ";
}
