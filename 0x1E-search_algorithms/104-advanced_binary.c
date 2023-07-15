#include "search_algos.h"

/**
 * recursive_binary - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @left: the the beginning of the new array
 * @right: the the end of the new array
 * @value: the value to search for
 * Return: the first index where value is located,
 * otherwise -1 if value is not present in array or if array is NULL
*/
int recursive_binary(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (recursive_binary(array, left, i, value));
	return (recursive_binary(array, i + 1, right, value));
}

/**
 * advanced_binary - function that searches for a value in a sorted array of
 * integers using the advanced Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located,
 * otherwise -1 if value is not present in array or if array is NULL
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_binary(array, 0, size - 1, value));
}
