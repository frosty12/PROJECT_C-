#include "stdafx.h"
#include <iostream>


int main(){
	double i,k,suma,srar;
	k=0;
	suma = 0;
	while (true)
	{
		std::cout << "Enter number " << std::endl;
		std::cin >> i;
		if (i == 777) break;
		suma = suma+i;
		k++;
	}
	srar = suma / k;
	std::cout << "Srednye arifmet is " << srar << std::endl;
	return 0;
}
