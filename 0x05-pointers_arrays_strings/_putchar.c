#include <unistd.h>

/**
 * _putchar - write the character to stdout
 *
 * @c: the character
 *
 * Return: 1 on success, -1 error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
