#include <stdio.h>
/**
 * main - main function
 * listing alphabets using putchar
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
