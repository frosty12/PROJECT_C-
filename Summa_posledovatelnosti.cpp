#include "stdafx.h"
#include <iostream>


int main(){
	int i, sum;
	sum = 0;
	do {
		std::cout << "Enter number " << std::endl;
		std::cin >> i;
		sum += i;
	} while (i != 777);
	sum = sum - 777;
	std::cout << "Sum is " << sum << std::endl;
	return 0;
}
