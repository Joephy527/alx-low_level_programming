#include <stdio.h>

/*
 * main -  prints the alphabet in lowercase, and then in uppercase.
 * retutn - 0
 */

int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	x = 'A';
	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return(0);
}
