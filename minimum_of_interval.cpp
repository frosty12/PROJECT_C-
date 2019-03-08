#include "stdafx.h"
#include <iostream>


int main(int argc, _TCHAR* argv[]){
	int i, m, k;
	k = 0;
	while (true){
		std::cout << "Enter number " << std::endl;
		std::cin >> i;
		if (i == 777) break;
		k++;
		if (k == 1){
			m = i;
		}
		else{
			if (m>i){
				m = i;
			}
		}
	}
	std::cout << "Minimum is " << m << std::endl;
	return 0;
}
