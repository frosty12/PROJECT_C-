#include "stdafx.h"
#include <iostream>

int main(int argc, _TCHAR* argv[])
{
	int i, k;
	k = 0;
	while (true) {
		std::cout << "Enter number " << std::endl;
		std::cin >> i;
		if (i == 777) break;
		k++;
		if (i = 0){
			std::cout << "O nomer " << k << std::endl;
		}
	}
	return 0;
}
