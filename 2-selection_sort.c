#include "sort.h"
/**
 * selection_sort - sort an array
 * @array: an array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
    size_t i, j, min_idx, tmp;
  

    for (i = 0; i < size - 1; i++)
    {

        min_idx = i;
        for (j = i+1; j < size; j++)
          if (array[j] < array[min_idx])
            min_idx = j;

        tmp = array[min_idx];
        array[min_idx] = array[i];
        array[i] = tmp;
        print_array(array, size);
    }
}
