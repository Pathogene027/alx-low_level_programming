#include <stdio.h
#include "main.h"
/**
* print_alphabet - print a group of text
*
* Return: void
*/
void print_alphabet(void)
{
	char ch = "a";
	char i = "z";

	while (ch <= i)
	{
		putchar(ch);
		ch++;
	};
	putchar('\n');
}
