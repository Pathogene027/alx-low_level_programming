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
printf("Size of a char: %d byte(s)\n", sizeof(character));
printf("Size of an int : %d byte(s)\n", sizeof(integer));
printf("Size of a long int: %d byte(s)\n", sizeof(longinteger));
printf("Size of a long long int: %d byte(s)\n", sizeof(longlonginteger));
printf("Size of a float: %d byte(s)\n", sizeof(decimal));
/**
* return - The function that ends a program
* Description: It allows no other code from running after it runs
*/
return (0);
}
