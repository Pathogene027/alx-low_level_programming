#include <stdio.h>
#include "main.h"
/**
* _isupper - checks for uppercases
*
* Return: returns 1 if c is upper or zero
*/
int _isupper(int c)
{
	if (isupper(c))
	{
		c = 1;
	};
	else
	{
		c = 0;
	};
	return (c);
}
