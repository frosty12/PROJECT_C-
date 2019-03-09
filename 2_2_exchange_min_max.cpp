#include "stdafx.h"
#include <iostream>
#include <stdio.h>

/*
2.2	Поменять местами максимальный и минимальный элементы массива. Вывести измененный массив на экран.
*/
int main(int argc, _TCHAR* argv[])
{
	int n, mini, maxi, max_i, min_i, k;

	std::cout << "Enter number of values: ";
	std::cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++){
		std::cout << "Enter value: ";
		std::cin >> a[i];
	}
	std::cout << std::endl;

	max_i = 0;
	min_i = 0;
	mini = a[min_i];
	maxi = a[max_i];
	for (int i = 1; i < n; i++){
		if (a[i] < mini){
			mini = a[i];
			min_i = i;
		}
		else
		{
			if (a[i] > maxi){
				maxi = a[i];
				max_i = i;
			}
		}
	}

	a[max_i] = mini;
	a[min_i] = maxi;

	for (int i = 0; i < n; i++){
		std::cout << a[i] << std::endl;
	}
		return 0;
}
