#include "stdafx.h"
#include <iostream>


int main(){
	int i, dupl;
	dupl = 1;
	do {
		std::cout << "Enter number " << std::endl;
		std::cin >> i;
		dupl =dupl*i;
	} while (i != 777);
	dupl = dupl/777;
	std::cout << "Composition is " << dupl << std::endl;
	return 0;
}
