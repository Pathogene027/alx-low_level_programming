#include "main.h"
/**
* _isdigit - detects numbers between 1 and 9
* @c: the number that will be detected
* Return: return 1 or 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
