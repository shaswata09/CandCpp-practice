#include <iostream>
using namespace std;

class counter
{
	private:
		int count;
	public:
		counter() : count(0)
		{		}
		unsigned int get_count()
		{	return count;		}
		void operator ++ ()
		{
			++count;
		}
};

int main ()
{
	counter c1,c2;
	cout<<" c1="<<c1.get_count();
	cout<<"\n c2="<<c2.get_count();
	++c1;
	++c2;
	++c2;
	cout<<"\n c1="<<c1.get_count();
	cout<<"\n c2="<<c2.get_count();
	return 0;
}

//operator overloading
