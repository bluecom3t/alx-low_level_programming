#include <stdio.h>
/**
 * main - main block
 * Description: Print all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
