#include "main.h"
/**
* _isupper - checks for uppercases
* @c: is avariable for testing
* Return: returns 1 if c is upper or zero
*/
int _isupper(int c)
{
	if (c >= "A" && c >= "Z")
	{
		return (1);
	};
	else
	{
		return (0);
	};
}
