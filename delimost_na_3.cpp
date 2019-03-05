#include <iostream>
int a,b,c;
using namespace std;

int main() {
	std::cout  << "Enter first number \n";
	std::cin >> a;
	std::cout  << "Enter second number \n";
	std::cin >> b;
	std::cout  << "Enter third number \n";
	std::cin >> c;
	if ((a+b+c)%3==0){
		std::cout << "number is divided" << std::endl;
	}
	else{
		std::cout << "number is not divided" << std::endl;	
	}
	return 0;
}
