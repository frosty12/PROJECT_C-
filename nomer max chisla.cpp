#include "stdafx.h"
#include <iostream>

int main(int argc, _TCHAR* argv[]){
	int i, m, k, pk;
	m = 0;
	k = 0;
	pk = 0;
	while (true) {
		std::cout << "Enter number " << std::endl;
		std::cin >> i;
		if (i == 777) break;
		k++;
		if (k == 1){
			m = i;
			pk = k;
		}
		else{
			if (i >= m){
				m = i;
				pk = k;
			}
		}
	}
	std::cout << "Max nuber is " << pk << std::endl;
	return 0;
}