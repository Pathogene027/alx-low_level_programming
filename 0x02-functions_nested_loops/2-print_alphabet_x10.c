#include<stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - it prints out alphabets 10 times
*
* Return: returns void
*/
void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		};
		i++;
	};
	putchar('\n');
}
