#include "sort.h"
void bubble_sort(int *array, size_t size)
{
    size_t i = 0;
    size_t ii = 0;
    size_t len_line  = size;
    int aux = 0;

    if (!array)
        return;

    while (i < size - 1)
    {
        for (ii = 0; ii < len_line - 2;)
        {
            if (array[ii] > array[ii + 1])
            {
                aux = array[ii];
                array[ii] = array[ii + 1];
                array[ii + 1] = aux;
                print_array(array, size);
            }
            ii++;
        }
        i++;
    }
    
}