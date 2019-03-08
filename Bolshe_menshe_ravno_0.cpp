#include "stdafx.h"
#include <iostream>

int main(int argc, _TCHAR* argv[])
{
	int i, men, bol, ravno;
	men = 0;
	bol = 0;
	ravno = 0;
	while (true) {
		std::cout << "Enter number " << std::endl;
		std::cin >> i;
		if (i == 777) break;
		if (i < 0) {
			men++;
		}
		if (i > 0) {
			bol++;
		}
		if (i == 0) {
			ravno++;
		}
	}
	std::cout << "Bolshe 0 - " << bol << std::endl;
	std::cout << "Menshe 0 - " << men << std::endl;
	std::cout << "ravnono 0 - " << ravno << std::endl;
	return 0;
}
