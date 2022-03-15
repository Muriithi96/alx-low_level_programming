#include "main.h"

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
			 _putchar(P[i]);
		 }
	_putchar('\n');
        return (0);
}
