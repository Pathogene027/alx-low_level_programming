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
printf("Size of a char: %c byte(s)\n", sizeof(character));
printf("Size of an int : %d byte(s)\n", sizeof(integer));
printf("Size of a long int: %ld byte(s)\n", sizeof(longinteger));
printf("Size of a long long int: %lld byte(s)\n", sizeof(longlonginteger));
printf("Size of a float: %f byte(s)", sizeof(decimal));
/**
* return - The function that ends a program
* Description: It allows no other code from running after it runs
*/
return (0);
}
