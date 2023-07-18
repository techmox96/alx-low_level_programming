#include "main.h"
/**
 * printing  the alphabet, in lowercase, followed by a new line.
 * return always 0
 */
void print_alphabet(void)
{	 char letter = 'a';
      while (letter <= 'z') {
       putchar(letter);
       letter++;
				         }
	_putchar('\n');
}
