#include <iostream>
using namespace std;

class counter
{
	private:
		int count;
		
	public:
		counter() : count(0)
		{		}
		counter(int c) : count(c) //constructor, one arg
		{ 		}
		unsigned int get_count()
		{	return count;		}
		
		counter operator ++ ()
		{
			++count;
			return counter(count);
		}
};

int main ()
{
	counter c1,c2;
	cout<<" c1="<<c1.get_count();
	cout<<"\n c2="<<c2.get_count();
	++c1;	
	cout<<"\n c1="<<c1.get_count();
	c2=++c1;
	cout<<"\n c2="<<c2.get_count();
	return 0;
}

//operator overloading with return type
