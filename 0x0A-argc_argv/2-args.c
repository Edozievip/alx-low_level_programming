#include "main.h"
#include <stdio.h>
/*
 * main - prints the number comtent
 * @argc: argiement count
 * @argv: arguement vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		prinf("%s\n", argv[i]);
	}
	return (0);
}
