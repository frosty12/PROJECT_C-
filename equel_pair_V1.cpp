#include "stdafx.h"
#include <iostream>

int main(int argc, _TCHAR* argv[])
{
	int i, c, k, cnt,prv_i;
	c = 0;
	k = 0;
	cnt = 0;
	while (true) {
		std::cout << "Enter number " << std::endl;
		std::cin >> i;
		if (i == 777) break;
		cnt++;

		if (cnt>1){
			if (i == prv_i){
				k++;
				cnt = 0;
			}
		}
		prv_i = i;
	}
	std::cout << "Kol-vo ravnyh - " << k << std::endl;
	return 0;
}
