#include <stdio.h>
#include "main.h"
/**
* printing - Prints out the text putchar
*
* Return: returns 0
*/
int printing(void)
{
	char ch[20] = "_putchar";
	int i = 0;

	while (ch[i] != '\0')
	{
		putchar(ch[i]);
		i++;
	};
	putchar('\n');
	return (0);
}
/**
* main - Main entry point of the program
*
* Return: returns 0
*/
int main(void)
{
	printing();
	return (0);
}
