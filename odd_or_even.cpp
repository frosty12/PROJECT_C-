#include "stdafx.h"
#include <iostream>

int main(){
	int a, b, c, umn;
	std::cout << "Enter first number \n";
	std::cin >> a;
	std::cout << "Enter second number \n";
	std::cin >> b;
	std::cout << "Enter third number \n";
	std::cin >> c;
	umn = a*b*c;
	if (umn%2 == 0) {
		std::cout << "Even" << std::endl;
	}
	else{
		std::cout << "Odd" << std::endl;
	}
	return 0;
}
