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

printf("size of a %d bytes\n", sizeof(num));
printf("size of a %d bytes\n", sizeof(numl));
printf("size of a %d bytes\n", sizeof(numll));
printf("size of a %f bytes\n", sizeof(fl));
printf("size of a %c bytes\n", sizeof(ch));

	return (0);

}
