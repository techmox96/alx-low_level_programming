#include "main.h"

/**
 * _strncpy - Copies a string up to a certain number of characters.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to copy.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int j = 0;

    // Copy up to n characters from source to destination
    while (j < n && src[j] != '\0')
    {
        dest[j] = src[j];
        j++;
    }

    // Fill the remaining space in destination with null-terminators
    while (j < n)
    {
        dest[j] = '\0';
        j++;
    }

    return dest;
}
