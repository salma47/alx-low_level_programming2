#include <stdio.h>

/**
 * main - entry point
 *
 * Description: numbers printed on the base16 lowercase
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);

		/* after 9 we go to 96 */
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
