#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value.
 * @s: Pointer to the start of the memory block.
 * @b: The value to be set.
 * @n: Number of bytes to be filled.
 *
 * Return: A pointer to the modified memory block (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s; // Create a pointer to track the start of the memory block

    while (n--)
    {
        *ptr = b;   // Set the value at the current pointer position
        ptr++;      // Move the pointer to the next memory location
    }

    return s;
}
