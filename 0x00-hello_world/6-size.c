#include <stdio.h>
/**
* main - The function prints the sizes of all data types
*
* Return: 0
*/
int main(void)
{
	char character;
	int integer;
	long int longinteger;
	long long int longlonginteger;
	float decimal;

	printf("Size of a char: %lu byte(s)\n",
	(unsigned long)sizeof(character));
	printf("Size of an int : %lu byte(s)\n",
	(unsigned long)sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n",
	(unsigned long)sizeof(longinteger));
	printf("Size of a long long int: %lu byte(s)\n",
	(unsigned long)sizeof(longlonginteger));
	printf("Size of a float: %d byte(s)",
	(unsigned long)sizeof(decimal));
	return (0);
}
