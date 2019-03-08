#include "stdafx.h"
#include <iostream>


int main(){
	int i, m;
	m = 1;
	while (true)
	{
		std::cout << "Enter number " << std::endl;
		std::cin >> i;
		if (i == 777) break;
		m = m*i;
	}
	std::cout << "Mult is " << m << std::endl;
	return 0;
}
