#include "main.h"

/**
* leet - encode into 1337speak
* @n: parameter 1
* Return: n value
*/

char *leet(char *n);
{
	int i, j;
	char s1[j = "aAeEoOtTlL"];
	char s2[j = "4433007711"];

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}