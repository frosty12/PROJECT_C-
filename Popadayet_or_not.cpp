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
	if (c>a) {
		if (c<b) {
			std::cout << "Gets into " << std::endl;
		}
		else {
			std::cout << "Dont gets into " << std::endl;
		}
	}
	else{
		std::cout << "Dont gets into " << std::endl;
	}
	return 0;
}
