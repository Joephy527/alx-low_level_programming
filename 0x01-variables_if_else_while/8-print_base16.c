#include <stdio.h>

/**
 * main -  prints all the numbers of base 16 in lowercase.
 * Return: 0
 */

int main(void)
{
	int x = 48;
	int y = 97;

	while (x < 58)
	{
		putchar(x);
		x++;
	}
	while (y < 103)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
