#include "sort.h"
void bubble_sort(int *array, size_t size)
{
size_t index = 0;
int aux = 0;

if (!array)
return;
if (size == 0)
return;
for (index = 0; index + 1 < size; index++)
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
