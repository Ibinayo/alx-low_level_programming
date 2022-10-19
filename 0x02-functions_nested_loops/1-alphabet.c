#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{
	char lc;
	for (lc = 'a'; lc <= 'z'; lc++)
		_putchar(lc);

	_putchar('\n');
}
