#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class beta; //needed for frifunc declaration
class gama;
class alpha;
class gama : public alpha, public beta {
	private:
		int d;
	public:
		gama () : d(5)
		{		}
		int frifunc(alpha a, beta b) //function definition
		{
		return( a.data + b.data + d );
		}
	
};
class alpha
{
private:
int data;
public:
alpha() : data(3) { } //no-arg constructor
friend int gama::frifunc(alpha, beta); //friend function
};
////////////////////////////////////////////////////////////////
class beta
{
private:
int data;
public:
beta() : data(7) { } //no-arg constructor
friend int gama::frifunc(alpha, beta); //friend function
};


////////////////////////////////////////////////////////////////

//-------------------------
int main()
{
alpha aa;
beta bb;
gama cc;
cout << cc.frifunc(aa, bb) << endl; //call the function
return 0;
}
