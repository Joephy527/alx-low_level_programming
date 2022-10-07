#include <stdio.h>

/*
 * main - prints all single digit numbers of base 10 starting from 0 using only putchar.
 * return - 0
 */

int main(void)
{
	int x = 48;
	while (x <= 57)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return(0);
}
