#include <iostream>
#include <cstdlib>

int main()
{
	const int length = 12;

	char* pointer;
	char* q_pointer;

	char massive[length];

	pointer = massive;
	q_pointer = &massive[length - 1];

	pointer[0] = 'A';

	while (pointer != q_pointer)
	{
		pointer++;

		*pointer = pointer[-1] + 1;
	}

	for (int i = 0; i < length; i++)
	{
		std::cout << massive[i] << " | ";
	}

	std::cout << std::endl;

	for (int i = 0; i < length; i++)
	{
		std::cout << q_pointer[-i] << " | ";
	}

	std::cout << std::endl;

	return 0;
}
