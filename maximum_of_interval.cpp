#include "stdafx.h"
#include <iostream>


int main(int argc, _TCHAR* argv[]){
	int i, maxim, k;
	k = 0;
	while (true){
		std::cout << "Enter number " << std::endl;
		std::cin >> i;
		if (i == 777) break;
		k++;
		if (k == 1){
			maxim = i;
		}
		else{
			if (i > maxim){
				maxim = i;
			}
		}
	}
	std::cout << "maximum is " << maxim << std::endl;
	return 0;
}
