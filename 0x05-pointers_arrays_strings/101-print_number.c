#include "main.h"
/**
 *print_number-prints an integer.
 *@n: variable to be printed.
*/
void print_number(int n)
{
	unsigned int  numero;

	if (n < 0)
	{
		numero = -n;
		_putchar('-');
	}
	else
	{
		numero = n;
	}
	if (numero / 10)
	{
		print_number(numero / 10);
	}
	_putchar((numero % 10) + '0');
}
