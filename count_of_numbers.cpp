#include "stdafx.h"
#include <iostream>


int main(){
	int i, kol;
	kol = 0;
	do {
		std::cout << "Enter number " << std::endl;
			std::cin >> i;
			kol++;

	} while (i != 777);
	kol--;
	std::cout << "Count of  nubers " << kol << std::endl;
	return 0;
}
