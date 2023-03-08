#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @x: pointer to imputed array
 *
 * Return: x
 */

char *string_toupper(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= 'a' && x[i] <= 'z')
		{
			if ((str[index - 1] == ' ' ||
			     str[index - 1] == '\t' ||
			     str[index - 1] == '\n' ||
			     str[index - 1] == ',' ||
			     str[index - 1] == ';' ||
			     str[index - 1] == '.' ||
			     str[index - 1] == '!' ||
			     str[index - 1] == '?' ||
			     str[index - 1] == '"' ||
			     str[index - 1] == '(' ||
			     str[index - 1] == ')' ||
			     str[index - 1] == '{' ||
			     str[index - 1] == '}' ||
			     index == 0)
				{
					x[i] -= 32;
				}
		}
	}
	return (x);
}
