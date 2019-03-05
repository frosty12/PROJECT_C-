#include <iostream>
using namespace std;


int main () {
	int a,b,c;
	std::cout  << "Enter first number \n";
	std::cin >> a;
	std::cout  << "Enter second number \n";
	std::cin >> b;
	std::cout  << "Enter third number \n";
	std::cin >> c;
	if (a>b){
		if (a>c){
			std::cout << " max is " << a << std::endl;
			if (b>c){
				std::cout << " middle number is " << b << std::endl;
				std::cout << " min is " << c << std::endl;
			}
			else{
				std::cout << " middle number is " << c << std::endl;
				std::cout << " min is " << b << std::endl;
			}
		} 
		else{
		std::cout << " max is " << c << std::endl;
		std::cout << " middle number is " << a << std::endl;
		std::cout << " min is " << b << std::endl;	
		}
		
	}
	else {
		if (a>c){
		std::cout << " max is " << b << std::endl;
		std::cout << " middle number is " << a << std::endl;
		std::cout << " min is " << c << std::endl;	
		}
	    else{
		if (b>c){
			std::cout << " max is " << b << std::endl;
			std::cout << " middle number is " << c << std::endl;	
		}
		else{
		std::cout << " max is " << c << std::endl;
		std::cout << " middle number is " << b << std::endl;	
		}
		std::cout << " min is " << a << std::endl;	
	    }
}
return 0;
}
