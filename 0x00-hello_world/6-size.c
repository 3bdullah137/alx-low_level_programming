#include <stdio.h>
/**
 * main - enter point
 * Description: using sizeof to print the size of various types.
 * Return: alweys 0 (success)
 */
int main(void)
{

printf("Size of char: a %u byte(s)\n", sizeof(char));
printf("Size of line: an %u byte(s)\n", sizeof(int));
printf("Size of long int: a %u byte(s)\n", sizeof(long int));
printf("Size of long long int: a %u byte(s)\n", sizeof(long long int));
printf("Size of float: a %u byte(s)\n", sizeof(float));

	return (0);

}
