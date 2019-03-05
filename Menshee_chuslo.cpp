#include <iostream>
using namespace std;

int main () {
int a,b,c,x;
        std: :cout  << "Enter first number \n";
	std::cin >> a;
	std::cout  << "Enter second number \n";
	std::cin >> b;
	std::cout  << "Enter third number \n";
	std::cin >> c;
	x = a;
	if (x<=b){
		;
	}
	else{
		x = b;	
	}
	if (x<=c){
	std::cout << "min is " << x << std::endl;
	cin >> x;
	}
	else{
	std::cout << "min is " << c << std::endl;
	std::cin >> c;
	}
	return 0;
}
