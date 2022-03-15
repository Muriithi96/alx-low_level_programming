#include <stdio.h>

/**
 * main - check your code
 *
 * Return: Always 0.
 */

void print_alphabet(void);
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar (alp);
		alp++;

	}
	putchar ('\n');
}
