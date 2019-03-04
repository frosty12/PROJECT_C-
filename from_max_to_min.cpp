#include <iostream>
int a,b,c;
using namespace std;


int main () {
	cout  << "Enter first number \n";
	cin>>a;
	cout  << "Enter second number \n";
	cin>>b;
	cout  << "Enter third number \n";
	cin>>c;
	if (a>b)
	{
		if (a>c)
		{
			cout<<" max is "<<a<<endl;
			if (b>c)
			{
				cout<<" middle number is "<<b<<endl;
				cout<<" min is "<<c<<endl;
			}
			else
			{
				cout<<" middle number is "<<c<<endl;
				cout<<" min is "<<b<<endl;
			}
		} 
		else
		{
		cout<<" max is "<<c<<endl;
		cout<<" middle number is "<<a<<endl;
		cout<<" min is "<<b<<endl;	
		}
		
	}
	else {
	
		if (a>c)
		{
		cout<<" max is "<<b<<endl;
		cout<<" middle number is "<<a<<endl;
		cout<<" min is "<<c<<endl;	
		}
	    else 
	    {
		if (b>c)
		{
		cout<<" max is "<<b<<endl;
		cout<<" middle number is "<<c<<endl;	
		}
		else
		{
		cout<<" max is "<<c<<endl;
		cout<<" middle number is "<<b<<endl;	
		}
		cout<<" min is "<<a<<endl;	
	    }
}
return 0;
}
