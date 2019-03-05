#include <iostream>
using namespace std;

int main () {
        int a,b,c,maximum;
	std: :cout << "Enter first number \n";
        std: :cin >> a;
        std: :cout  << "Enter second number \n";
        std: :cin >> b;
        std: :cout  << "Enter third number \n";
        std: :cin >> c;
        maximum = a;
	if (maximum>=b){
                 ;
	}
	else{
        maximum = b;
	}
	if (maximum>=c){
        std: :cout<<"max is "<<maximum<<endl;
        std: :cin>>maximum;
	}
	else{
        std: :cout << "max is " << c << endl;
        std: :cin >> c;
	}
	return 0;
}
