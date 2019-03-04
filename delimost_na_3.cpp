#include <iostream>

int a,b,c;
using namespace std;

int main() {
	cout  << "Enter first number \n";
	cin>>a;
	cout  << "Enter second number \n";
	cin>>b;
	cout  << "Enter third number \n";
	cin>>c;
	if ((a+b+c)%3==0)
	{
		cout<<"number is divided"<<endl;
	}
	else
	{
		cout<<"number is not divided"<<endl;
		
	}
	return 0;
}
