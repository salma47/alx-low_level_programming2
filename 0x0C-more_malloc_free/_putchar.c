#include <unistd.h>

/**
 * _putchar - write the charachter
 * @c: char to print
 *
 * Return: 1 on success, -1 else
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
