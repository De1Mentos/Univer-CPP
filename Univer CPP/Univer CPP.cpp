#include <iostream>

int main()
{
	int sum = 0;
	int array1[] = { 4, 2, 5 };
	int array2[] = { 4, 1, 4 };
	int array3[] = { 7, 5, 2 };

	for (size_t i = 0; i < 3; i++)
	{
		if (array1[i] % 2 == 0)
		{
			sum += array1[i];
		}
	}
	for (size_t i = 0; i < 3; i++)
	{
		if (array2[i] % 2 == 0)
		{
			sum += array2[i];
		}
	}
	for (size_t i = 0; i < 3; i++)
	{
		if (array3[i] % 2 == 0)
		{
			sum += array3[i];
		}
	}
	std::cout << sum << std::endl;
}
