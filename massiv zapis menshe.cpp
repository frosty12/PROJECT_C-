#include "stdafx.h"
#include <iostream>
#include <stdio.h>

int main(int argc, _TCHAR* argv[])
{
	int n	// -- Кол-во вводимых чисел для массива а
	, maxi	// -- заданное максимальное число для сравнения
	, i1; // -- индекс пустой ячейки в массиве b и с

	std::cout << "Enter number of values: ";
	std::cin >> n;
//
	int *a = new int[n];
	for (int i = 0; i < n; i++){
		std::cout << "Enter value: ";
		std::cin >> a[i];
	}
	std::cout << std::endl;
//
	std::cout << "Enter max number: ";
	std::cin >> maxi;
//
	i1 = 0; // начальное значение индекса пустой ячейки
	int *b = new int[n];	// -- массив значений
	int *c = new int[n];	// -- массив индексов
	for (int i = 0; i < n; i++){
		if (a[i] < maxi)
		{
			b[i1] = a[i];
			c[i1] = i;
			i1++;	// -- новое значение индекса пустой ячейки
		}
	}

// -- вывод значений
	std::cout << "Array of numbers: ";
	for (int i = 0; i < i1; i++){
		std::cout << b[i];
		std::cout << " ";
	}
	std::cout << std::endl;
// --вывод индексов
	std::cout << "Array of indexes: ";
	for (int i = 0; i < i1; i++){
		std::cout << c[i];
		std::cout << " ";
	}
	std::cout << std::endl;

	return 0;
}

