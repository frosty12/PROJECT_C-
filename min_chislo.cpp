#include <iostream>
int a,b,c,x,m;
using namespace std;


int main () {
	cout  << "Enter first number \n";
	cin>>a;
	cout  << "Enter second number \n";
	cin>>b;
	cout  << "Enter third number \n";
	cin>>c;
	cout  << "1-first, 2-second, 3- third \n";
	x = a;
	if (x<b)
	{
		m = 1;
		if (x<c)
		{
			cout<<"min is "<<m<<endl;
			cin>>m;	
		}
		else
		{
			if (b<c)
			{
				m=2;
				cout<<"min is "<<m<<endl;
				cin>>m;
			}
			else
			{
				m=3;
				cout<<"min is "<<m<<endl;
				cin>>m;	
			}
		}
		
	}
	else
	{
	m = 2;
		if (b<c)
		{
			cout<<"min is "<<m<<endl;
			cin>>m;	
		}
		else
		{
			m = 3;
			cout<<"min is "<<m<<endl;
			cin>>m;		
		}
	}	
	
	return 0;
}
