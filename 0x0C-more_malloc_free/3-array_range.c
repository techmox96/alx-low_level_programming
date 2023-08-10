#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers with a specified range
 * @min: minimum value of the range (inclusive)
 * @max: maximum value of the range (inclusive)
 *
 * Return: pointer to the new array, or NULL if memory allocation fails
 */
int *array_range(int min, int max)
{
    int *result;
    int i, size;

    if (min > max)
        return NULL;

    size = max - min + 1;

    result = malloc(sizeof(int) * size);

    if (result == NULL)
        return NULL;

    for (i = 0; min <= max; i++)
        result[i] = min++;

    return result;
}
