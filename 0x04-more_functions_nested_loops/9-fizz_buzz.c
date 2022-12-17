#include "main.h"
#include <stdio>

/**
 * main - print 1-100, for multiples of 3 'fizz', 5 'buzz', 5 and 3 'fizzbuzz'
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 1; a < 100; a++)
	{
	if (a % 3 == 0)
	{
		printf("Fizz");
	}
	else if (a % 5 == 0)
	{
		printf("Buzz");
	}
	else if ((a % 5 == 0) && (a % 3 == 0))
	{
		printf("FizzBuzz");
	}
	else
	{
		printf("%d", x);
	}
	if (x != 100)
	{
		printf(" ");
	}
	}
	printf('\n');
	return (0);
}
