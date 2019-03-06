#include "stdafx.h"
#include <iostream>

int main(){
	int a, b, c;
    std::cout << "Enter first number \n";
	std::cin >> a;
	std::cout << "Enter second number \n";
	std::cin >> b;
	std::cout << "Enter third number \n";
	std::cin >> c;
	if ((a - b) == (b - c)){
		std::cout << "Gets into " << std::endl;
	}
	else{
		std::cout << "Dont gets into " << std::endl;
	}
	return 0;
}
