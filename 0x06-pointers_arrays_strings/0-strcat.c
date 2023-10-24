#include "main.h"

/**
 * _strcat -  function that concatenates two strings.
 *
 * @dest: pointer to destination
 * @src: pointer to source input
 *
 * Return: pointer to result string
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find array's size*/
	while (dest[c])
		c++;

	/*iteration*/
	for (c2 = 0; src[c2] ; c2++)
		/*append*/
		dest[c++] = src[c2];

	return (dest);
}
