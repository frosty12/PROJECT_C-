#include "stdafx.h"
#include <iostream>
#include <stdio.h>

bool MIsInArray(int e, int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (e == a[i])
		{
			return true;

		}
	}
	return false;

}

void MAddIntoArray(int* a, int& empty_i, int e)
{
	a[empty_i] = e;
	empty_i++;
}

void MIntArrayPrint(char* s, int* a, int n)
{
	std::cout << s << "[0.."<< n-1 << "]: ";
	for (int i = 0; i < n; i++){
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

}

void MIntArrayInit(char* s, int*& a, int& n)
{
	std::cout << "Enter number of " << s << " values: ";
	std::cin >> n;
	//
	if (a != NULL) {
		delete [] a;

	}
	a = new int[n];

	for (int i = 0; i < n; i++){
		std::cout << "Enter """ << s << "[" << i << "]"": ";
		std::cin >> a[i];
	}
	std::cout << std::endl;

}

int main(int argc, _TCHAR* argv[])
{
	int *a1 = NULL, n1 = 0,
		*a2 = NULL, n2 = 0,
		*b = NULL,
		empty_i = 0;
//
	MIntArrayInit("InitialArray", a1, n1);
	MIntArrayInit("LimitArray", a2, n2);
//
	b = new int[n1];
	for (int i = 0; i < n1; i++)
	{
		if ( !MIsInArray( a1[i], a2,n2) ){
			MAddIntoArray(b, empty_i, a1[i]);

		}

	}
//
	MIntArrayPrint("ResultArray", b, empty_i);
	return 0;

}
