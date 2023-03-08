#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @x: pointer to imputed array
 *
 * Return: x
 */

char *cap_string(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= 'a' && x[i] <= 'z')
		if (x[i - 1] == ' ' ||
			    x[i - 1] == '\t' ||
			    x[i - 1] == '\n' ||
			    x[i - 1] == ',' ||
			    x[i - 1] == ';' ||
			    x[i - 1] == '.' ||
			    x[i - 1] == '!' ||
			    x[i - 1] == '?' ||
			    x[i - 1] == '"' ||
			    x[i - 1] == '(' ||
			    x[i - 1] == ')' ||
			    x[i - 1] == '{' ||
			    x[i - 1] == '}' ||
			    i == 0)

					x[i] -= 32;
				}
		}
	}
	return (x);
}
