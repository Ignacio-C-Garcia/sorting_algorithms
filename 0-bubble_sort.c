#include "sort.h"
/**
 * bubble_sort - sorts an array
 * @array: an array of integers
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t index = 0;
	int aux = 0;

	if (array == NULL)
		return;
	if (size < 2)
		return;

	for (index = 0; index < size - 1; index++)
	{
		if (array[index] > array[index + 1])
		{
			aux = array[index];
			array[index] = array[index + 1];
			array[index + 1] = aux;
			print_array(array, size);
			bubble_sort(array, size);
		}
	}
}
