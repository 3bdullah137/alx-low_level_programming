#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - enrty point
 * Deascription: a
 * Return: 0 (success)
 */

int main(void)

{
int n;

srand(time(0));
n = rand()- RAND_MAX / 2;
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n < 0)
printf("%is negative\n", n);
else if (n == 0)
printf("%i is zero\n", n);
return (0);

}
