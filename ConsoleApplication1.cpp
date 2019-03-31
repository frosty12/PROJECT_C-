#include "stdafx.h"
#include <iostream>
#include <stdio.h>

int main(int argc, _TCHAR* argv[])
{
	int n1, n2, // -- Кол-во вводимых чисел для массива a1 a2
		i; // -- инедекс первой пустой ячейки	

	std::cout << "Enter number of values 1: ";
	std::cin >> n1;
	//
	int *a1 = new int[n1];
	for (int i = 0; i < n1; i++){
		std::cout << "Enter value 1: ";
		std::cin >> a1[i];
	}
	std::cout << std::endl;

	std::cout << "Enter number of values 2: ";
	std::cin >> n2;
	//
	int *a2 = new int[n2];
	for (int i = 0; i < n2; i++){
		std::cout << "Enter value 2: ";
		std::cin >> a2[i];
	}
	std::cout << std::endl;

	int *b = new int[n1];
	i = 0;
	for (int i1 = 0; i1 < n1; i1++)
	{
		/*
		for (int i2 = 0; i2 < n2; i2++)
		{
		if (a1[i1] == a2[i2])
		{
		b[i] = a1[i1];
		i++;
		break;
		}

		}
		*/
		int i2 = 0;
		do{
			if (a1[i1] == a2[i2])
			{
				b[i] = a1[i1];
				i++;
				i2 = n2+1;

			}
			else {
				i2++;
			}

		} while (i2 < n2);
	}

	// -- вывод значений
	std::cout << "Array of allowed numbers: ";
	for (int i1 = 0; i1 < i; i1++){
		std::cout << b[i1];
		std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}