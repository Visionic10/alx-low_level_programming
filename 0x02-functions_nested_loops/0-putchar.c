#include "main.h"

/**
 * main - prints _putchar, followed by a new line 
 * Return: Always 0 (Success)
 */
int main (void)
{
	char cli [] = "_putchar";

	int c;
	
	for (c = 0; c < 9; c++)
	{
		_putchar(cli[c]);
	}
	_putchar('\n');
	return (0);
}
