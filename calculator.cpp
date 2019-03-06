#include "stdafx.h"
#include <iostream>

int main(){
	int a, b, znak;
	std::cout << "1 - multiplication, 2 - Division, 3 - addition, 4 - substraction, 5 - remainder \n";
	std::cout << "Enter first number \n";
	std::cin >> a;
	std::cout << "Enter second number \n";
	std::cin >> b;
	std::cout << "Enter arithmetic operation \n";
	std::cin >> znak;
	if (znak == 1) {
		std::cout << a*b << std::endl;
	}
	if (znak == 2) {
		std::cout << a/b << std::endl;
	};
	if (znak == 3) {
		std::cout << a+b << std::endl;
	}
	if (znak == 4) {
		std::cout << a-b << std::endl;
	}
	if (znak == 5) {
		std::cout << a%b << std::endl;
	}
	return 0;
}
