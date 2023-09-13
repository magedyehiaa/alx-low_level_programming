#include "function_pointers.h"
/**
 * array_iterator - map
 * @array: array Me gO z
 * @size: size
 * @action: fun pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *end = array + size - 1;
if (array && size && action)
while (array <= end)
action(*array++);
}
