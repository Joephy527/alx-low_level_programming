#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e.
 * Return: 0
 */

int main(void)
{
	char x = 'a';
	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
