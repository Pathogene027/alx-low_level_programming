#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* print_alphabet - print a group of text
*
* Return: void
*/
void print_alphabet(ch)
{
	char ch[];
	int i = 0;

	while (ch[i] != '\0')
	{
		putchar(tolower(ch[i]));
		i++;
	};
	putchar('\n');
}
