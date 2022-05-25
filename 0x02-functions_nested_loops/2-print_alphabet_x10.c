#include <stdio.h>
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
	
int main (void)
{
	int y;

	y = 0;
	while (y < 10)
	{
		int x;

		for (x = 'a'; x <= 'z'; x++)
		{
			putchar(x);
		}
		putchar('\n');
		y++;
	}
}
