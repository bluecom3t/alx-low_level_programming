#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 *
 * Description:A program that prints all possible
 * different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 *
 * Return: Always 0
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c++;
		}

		d++;
	}
}
