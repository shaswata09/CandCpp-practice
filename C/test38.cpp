main ()
{
	int a=12,b=0,c;
	try
	{
		c=a/b;
		cout<<c;
		cout<<endl<<"good bye";
		
	}
	catch (Exception e)
	{
		cout<<"arithmatic error occured";
	}
}
