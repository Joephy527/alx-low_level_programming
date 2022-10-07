#include <stdio.h>

/*
 * main -  prints the alphabet in lowercase.
 * return - 0
 */

int main (void)
{
	char x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return(0);
}
