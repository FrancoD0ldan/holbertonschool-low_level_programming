#include "main.h"

/**
 * main - check the code
 * Return: always 0
 *
 */
void
print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
