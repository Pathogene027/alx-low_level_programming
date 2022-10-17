#include <stdio.h>
/**
* main - The main function
* Description: The main entry point to the other programs
* char character
*/
int main(void)
{
char character;
int integer;
long int longinteger;
long long int longlonginteger;
float decimal;
printf("Size of a char: %d byte(s)", sizeof(character));
printf("Size of an int : %d byte(s)", sizeof(integer));
printf("Size of a long int: %d byte(s)", sizeof(longinteger));
printf("Size of a long long int: %d byte(s)", sizeof(longlonginteger));
printf("Size of a float: %d byte(s)", sizeof(decimal));
/**
* return - The function that ends a program
* Description: It allows no other code from running after it runs
*/
return (0);
}
