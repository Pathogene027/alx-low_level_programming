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
printf("Size of a char: %c byte(s)\nSize of an int : %d byte(s)\n
Size of a long int: %ld byte(s)\nSize of a long long int: %lld byte(s)\n
Size of a float: %f byte(s)", sizeof(character),
sizeof(integer), sizeof(longinteger),
sizeof(longlonginteger), sizeof(decimal));
/**
* return - The function that ends a program
* Description: It allows no other code from running after it runs
*/
return (0);
}
