#include <stdio.h>
#include <string.h>
#include <main.h>
/**
* print_alphabet - print a group of text
*
* Return: void
*/
void print_alphabet(void)
{
	char ch[100] = "I sometimes suffer from insomnia. And when I "
	char ch1[50] = "can't fall asleep, I play what I call the alphabet game";
	int i = 0;

	strncat(ch, ch1, 50);

	while (ch[i] != '\0')
	{
		putchar(tolower(ch[i]));
		i++;
	};
	putchar('\n');
};
/**
* main - main entry point of the program
*
* Return: integer
*/
int main(void)
{
	print_alphabet();
	return (0);
};
