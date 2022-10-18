#include <stdio.h>
#include "main.h"
/**
* main - Prints out the text putchar
*
* Return: returns 0
*/
void print_alphabet(void)
{
	char ch[100]="I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game";
	int i=0;
	while (ch[i]!='\0')
	{
		putchar(tolower(ch[i]));
		i++;
		return;
	}
}
int main(void)
{
	print_alphabet();
	return (0);
}
