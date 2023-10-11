#include"main.h"

/**
 * _islower - function check wether
 * the input is lowercase
 *
 * @c: entred character
 *
 * Return: 1 if 'c' is lowercase
 * else 0 always success
*/

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
