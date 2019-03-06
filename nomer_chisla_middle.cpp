#include "stdafx.h"
#include <iostream>
using namespace std;


int main(){
	int a, b, c, medium;
	std::cout << "Enter first number \n";
	std::cin >> a;
	std::cout << "Enter second number \n";
	std::cin >> b;
	std::cout << "Enter third number \n";
	std::cin >> c;
	std::cout << "1-first, 2-second, 3- third \n";
	if (a > b){
		if (a > c){
			if (b > c){
				medium = 2;
				std::cout << "Medium is " << medium << std::endl;
			}
			else{
				medium = 3;
				std::cout << "Medium is " << medium << std::endl;
			}
		}
		else{
			medium = 1;
			std::cout << "Medium is " << medium << std::endl;
		}
	}
	else{
		if (a > c){
			medium = 1;
			std::cout << "Medium is " << medium << std::endl;
		}
		else{
			if (c > b){
				medium = 2;
				std::cout << "Medium is " << medium << std::endl;
			}
			else{
				medium = 3;
				std::cout << "Medium is " << medium << std::endl;
			}

		}
	}
	return 0;
}

