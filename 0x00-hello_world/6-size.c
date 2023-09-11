#include <stdio.h>
/**
 * main - enter point
 * Description: using sizeof to print the size of various types.
 * Return: alweys 0 (success)
 */
int main(void)
{

printf("size of a %u byte(s)\n", sizeof(char));
printf("size of an %u byte(s)\n", sizeof(int));
printf("size of a %u byte(s)\n", sizeof(long int));
printf("size of a %u byte(s)\n", sizeof(long long int));
printf("size of a %u byte(s)\n", sizeof(float));

	return (0);

}
