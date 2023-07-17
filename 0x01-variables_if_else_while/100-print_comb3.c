#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print 2 digits
 * Return: Always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 58; n++)
	{
		for (m = n + 1; m <= 57; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 56 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
