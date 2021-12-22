#include <iostream>
#include <cstdlib>

void setArrays(int array[], const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		array[i] = 1 + rand() % 10;
	}
}

void showArray(int array[], const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << "array[" << i << "] = " << array[i] << std::endl;
	}
	std::cout << std::endl;
}

int calcArray(int array1[], int array2[], const int size, int &result)
{
	for (size_t i = 0; i < size; i++)
	{
		result += array1[i] * array2[i];
	}
	return result; 
}

int main()
{
	const int size = 5;
	int result = 0;

	int* array1 = new int[size];
	int* array2 = new int[size];

	setArrays(array1, size);
	setArrays(array2, size);

	showArray(array1, size);
	showArray(array2, size);
	result = calcArray(array1, array2, size, result);

	std::cout << result; 

	delete[] array1;
	delete[] array2;

	return 0;
}
