#include "stdafx.h"
#include <iostream>
#include <stdio.h>

int main(int argc, _TCHAR* argv[])
{
	int n	// -- ���-�� �������� ����� ��� ������� �
	, maxi	// -- �������� ������������ ����� ��� ���������
	, i1; // -- ������ ������ ������ � ������� b � �

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
	i1 = 0; // ��������� �������� ������� ������ ������
	int *b = new int[n];	// -- ������ ��������
	int *c = new int[n];	// -- ������ ��������
	for (int i = 0; i < n; i++){
		if (a[i] < maxi)
		{
			b[i1] = a[i];
			c[i1] = i;
			i1++;	// -- ����� �������� ������� ������ ������
		}
	}

// -- ����� ��������
	std::cout << "Array of numbers: ";
	for (int i = 0; i < i1; i++){
		std::cout << b[i];
		std::cout << " ";
	}
	std::cout << std::endl;
// --����� ��������
	std::cout << "Array of indexes: ";
	for (int i = 0; i < i1; i++){
		std::cout << c[i];
		std::cout << " ";
	}
	std::cout << std::endl;

	return 0;
}

