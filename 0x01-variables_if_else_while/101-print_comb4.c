#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Return: 0
 */

int main(void)
{
	int x = 48;
	int y;
	int z;

	while (x < 58)
	{
		y = 49;
		while (y < 58)
		{
			if (y > x)
			{
				z = 50;
				while (z < 58)
				{
					if (z > y)
					{
						putchar(x);
						putchar(y);
						putchar(z);
					if (x != 55 || y != 56)
					{
						putchar(44);
					}
						putchar(32);
					}
					z++;
				}
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
