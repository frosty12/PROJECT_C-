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
			if (b>c)
			{
				cout<<" min is "<<c<<endl;
				cout<<" middle number is "<<b<<endl;
			}
			else
			{
				cout<<" min is "<<b<<endl;
				cout<<" middle number is "<<c<<endl;
			}
				cout<<" max is "<<a<<endl;
		} 
		else
		{
		
		cout<<" min is "<<b<<endl;
		cout<<" middle number is "<<a<<endl;	
		cout<<" max is "<<c<<endl;
		
		}
		
	}
	else {
	
		if (a>c)
		{
		cout<<" min is "<<c<<endl;
		cout<<" middle number is "<<a<<endl;
		cout<<" max is "<<b<<endl;	
		}
	    else 
	    {
	    cout<<" min is "<<a<<endl;
		if (b>c)
		{
		cout<<" middle number is "<<c<<endl;
		cout<<" max is "<<b<<endl;	
		}
		else
		{
		cout<<" middle number is "<<b<<endl;
		cout<<" max is "<<c<<endl;
			
		}	
	    }
}
return 0;
}
