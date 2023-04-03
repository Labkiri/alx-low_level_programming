#include "main.h"
/**
 * main -entry point
 * Description:  prints the alphabet, in lowercase
 * Return: always 0
 */
int print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	putchar('\n');
}
