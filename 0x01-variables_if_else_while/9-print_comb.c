#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: 0
 */

int main(void)
{
	int x = 48;

	while (x < 58)
	{
		putchar(x);
		if (x == 57)
		{
			break;
		}
		putchar(44);
		putchar(32);
		x++;
	}
	putchar('\n');
	return (0);
}
