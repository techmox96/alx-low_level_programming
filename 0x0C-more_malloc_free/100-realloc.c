#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the memory block
 *
 * Return: pointer to the newly allocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    char *new_ptr;
    char *old_ptr;
    unsigned int i;

    if (new_size == old_size)
        return ptr;

    if (new_size == 0 && ptr)
    {
        free(ptr);
        return NULL;
    }

    if (!ptr)
        return malloc(new_size);

    new_ptr = malloc(new_size);
    if (!new_ptr)
        return NULL;

    old_ptr = ptr;

    if (new_size < old_size)
    {
        for (i = 0; i < new_size; i++)
            new_ptr[i] = old_ptr[i];
    }
    else
    {
        for (i = 0; i < old_size; i++)
            new_ptr[i] = old_ptr[i];
    }

    free(ptr);
    return new_ptr;
}
