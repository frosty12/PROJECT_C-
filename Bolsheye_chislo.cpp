#include <iostream>
#include <cstdio>
int a,b,c,x;
using namespace std;


int main () {
	cout  << "Enter first number \n";
	cin>>a;
	cout  << "Enter second number \n";
	cin>>b;
	cout  << "Enter third number \n";
	cin>>c;
	x = a;
	if (x>=b)
    {

		;
	
	}
	else
	{
		x = b;
		
	}
	if (x>=c)
	{
	cout<<"max is "<<x<<endl;
	cin>>x;
	
	}
	else
	{
	cout<<"max is "<<c<<endl;
	cin>>c;
		
	}
	return 0;
}