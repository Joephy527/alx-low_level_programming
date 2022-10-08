#include <stdio.h>

/**
 * main -  prints all possible different combinations of two digits.
 * Return: 0
 */

int main(void)
{
	int x = 48;
	int y;

	while (x < 58)
	{
		y = 49;
		while (y < 58)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x != 56 || y != 57)
				{
					putchar(44);
				}
				putchar(32);
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
