#include <iostream>
using namespace std;


int main(){
	int a, b, c, medium;
	std::cout << "Enter first number \n";
	std::cin >> a;
	std::cout << "Enter second number \n";
	std::cin >> b;
	std::cout << "Enter third number \n";
	std::cin >> c;
		if (a > b){
				if (a > c){
					if (b > c){
						medium = b;
						std::cout << "Medium is " << medium << std::endl;
					}
					else{
						medium = c;
						std::cout << "Medium is " << medium << std::endl;
						}
				}
				else{
					medium = a;
					std::cout << "Medium is " << medium << std::endl;
				}
			}
		 else{
			if (a > c){
				medium = a;
				std::cout << "Medium is " << medium << std::endl;
			}
			else{
				if (c > b){
					medium = b;
					std::cout << "Medium is " << medium << std::endl;
				}
				else{
					medium = c;
					std::cout << "Medium is " << medium << std::endl;
				}

			}
		}
	return 0;
}
