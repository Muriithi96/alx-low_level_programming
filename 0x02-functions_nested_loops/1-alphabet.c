#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
int main(void)
{
	char p;
	
	for (p = 'a'; p <= 'z'; p++)
		_putchar(p);

	_putchar ('\n');
}
