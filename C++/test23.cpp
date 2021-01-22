#include <iostream>
#include <string.h>
using namespace std;

int myfunc();

class human
{
	char name[20];
	int age;
	float weight;
	
	public:
		void getdata(void)
		{
			cout<<"Enter name :";
			cin>>name;
			cout<<"Enter age :";
			cin>>age;
			cout<<"Enter weight :";
			cin>>weight;
		}
		void showdata (void)
		{
			cout<<"\nName :"<<name;
			cout<<"\nAge :"<<age;
			cout<<"\nWeight :"<<weight;
			cout<<endl;
		}
		void setdata(void)
		{
			strcpy(name,"Supravo");
			age=5;
			weight=80;				
		}
};
	
int main ()
{
	
	human h1;
	h1.getdata();
	h1.showdata();
	h1.setdata();
	h1.showdata();
	myfunc();
	return 0;
}

int myfunc()
{
	human h2;		// the class object will not be created as the class is a local class of main.
	h2.getdata();
	h2.showdata();
	h2.setdata();
	h2.showdata();
	return 0;
}
