#include <iostream>
int a, b, c;
using namespace std;


int main() {
	std::cout << "Enter first number \n";
	std::cin >> a;
	std::cout << "Enter second number \n";
	std::cin >> b;
	std::cout << "Enter third number \n";
	std::cin >> c;

	if (a > b) {
		if (a > c) {
			if (b > c) {
				std::cout << " min is " << c << std::endl;
				std::cout << " middle number is " << b << std::endl;

			}
			else {
				std::cout << " min is " << b << endl;
				std::cout << " middle number is " << c << std::endl;

			}
			std::cout << " max is " << a << std::endl;

		}
		else {
			std::cout << " min is " << b << std::endl;
			std::cout << " middle number is " << a << std::endl;
			std::cout << " max is " << c << std::endl;
		}

	}
	else {
		if (a > c) {
			std::cout << " min is " << c << std::endl;
			std::cout << " middle number is " << a << endl;
			std::std::cout << '\n'; << " max is " << b << endl;
		}
		else {
			std::cout << " min is " << a << endl;
			if (b > c){
				std::cout << " middle number is " << c << endl;
				std::cout << " max is " << b << endl;
			}
			else{
				std::cout << " middle number is " << b << endl;
				cout << " max is " << c << endl;

			}

		}

	}
	return 0;

}
