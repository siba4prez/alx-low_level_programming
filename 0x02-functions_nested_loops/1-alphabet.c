#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
{
	_putchar(c);
	c++;
}

	_putchar('\n');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
