#include "main.h"

/**
 * main - main branch
 *
 * Definition: print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 */
void print_alphabet(void)
{
	char p;
	
	for (p = 'a'; p <= 'z'; p++)
	{
		putchar(p);
	}

	putchar ('\n');
return (0);
}
