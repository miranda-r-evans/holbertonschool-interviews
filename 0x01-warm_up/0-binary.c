#include <stdio.h>

/**
 * binary_search - finds a value by checking value at middle of array
 * @array: array to be checked
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: index of value, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int min = 0;
	unsigned int max = size - 1;
	unsigned int i = max / 2;
	unsigned int j;

	printf("Searching in array: ");
	for (j = min; j < max; j++)
		{
			printf("%d, ", array[j]);
		}
		printf("%d\n", array[j]);

	while (array[i] != value)
	{
		if (max <= min)
		{
			return (-1);
		}

		if (array[i] > value)
		{
			max = i;
		}
		else
		{
			min = i + 1;
		}

		i = (max + min) / 2;

		printf("Searching in array: ");
		for (j = min; j < max; j++)
		{
			printf("%d, ", array[j]);
		}
		printf("%d\n", array[j]);
	}

	return (i);
}
