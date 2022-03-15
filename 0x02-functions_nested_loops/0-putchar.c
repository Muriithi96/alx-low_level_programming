#include "stdio.h"
/**
 * main - Prints "_putchar" followed by a new line.
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i;
	char P[] = "_Putchar";
	

	for (i = 0; i < 9; i++)
	{
		putchar(P[i]);
        }
	putchar('\n');
return (0);
}
