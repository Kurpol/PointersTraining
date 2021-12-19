#include <iostream>
#include <cstdlib>

int main()
{
	int number; 
	int& reference = number; 

	number = 10;


	std::cout << number << std::endl;
	std::cout << reference << std::endl;

	std::cout << &number << std::endl;
	std::cout << &reference << std::endl;

	return 0;
}
