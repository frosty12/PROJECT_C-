#include "stdafx.h"
#include <iostream>
#include <stdio.h>

/*
2.1	Составить и вывести на экран новый массив с номерами элементов исходного массива, 
которые равны заданному значению. Заданное значение вводится с клавиатуры.
*/
int main(int argc, _TCHAR* argv[])
{
	int n, sv;
	std::cout << "Enter number of values: " << std::endl;
	std::cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++){
		std::cout << "Enter value: " << std::endl;
		std::cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		std::cout << a[i] << std::endl;
	}
	std::cout << "Enter searching value: " << std::endl;
	std::cin >> sv;
	for (int i = 0; i < n; i++){
		if (a[i] == sv){
			std::cout << "Index is: " << i << std::endl;
		}
	}
	return 0;
}

