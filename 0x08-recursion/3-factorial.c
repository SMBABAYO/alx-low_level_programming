#include "main.h"

/**
* factorial - finds the factorialof a number
* @n: number to find the factorial
* Return: factorial
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
