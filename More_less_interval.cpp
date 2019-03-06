#include "stdafx.h"
#include <iostream>

int main(){
	int a, b, c;
	std::cout << "Enter start of interval \n";
	std::cin >> a;
	std::cout << "Enter end of interval \n";
	std::cin >> b;
	std::cout << "Enter number \n";
	std::cin >> c;
	if (a > b) {
		if (a < c) {
			std::cout << "More than upper bound of interval " << std::endl;
		}
		else{
			std::cout << "Less than upper bound of interval " << std::endl;
		}
	}
	else {
		if (b < c) {
			std::cout << "More than upper bound of interval " << std::endl;
		}
		else{
			std::cout << "Less than upper bound of interval " << std::endl;
		}
	}
	return 0;
}
