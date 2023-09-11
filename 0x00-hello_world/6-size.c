#include <stdio.h>

main(void)

{
int num
long int numl
long long int numll
float fl
char ch

num = 346;
numl = 64553;
numll = 4643685;
fl = 331.5446;
ch = "A";

printf("size of an %d byte(s)\n", sizeof(num));
printf("size of a %d byte(s)\n", sizeof(numl));
printf("size of a %d byte(s)\n", sizeof(numll));
printf("size of a %f byte(s)\n", sizeof(fl));
printf("size of a %c byte(s)\n", sizeof(ch));

	return (0);

}
