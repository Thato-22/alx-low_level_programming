#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 *
 * Purpose - no hardcode
 *
 * Return
 */

int main(void)
{

unsigned long int i;
unsigned long int bef = 1;
unsigned long int aft = 2;
unsigned long int l = 1000000000;
unsigned long int bef 1;
unsigned long int bef 2;
unsigned long int aft 1;
unsigned long int aft 2;

printf("%lu", bef);

for (i = 1; i < 91; i++)
{
printf(",%lu", aft);
aft += bef;
bef = aft - bef;
}
bef 1 = (bef / 1);
bef 2 = (bef % 1);
aft 1 = (aft / 1);
aft 2 = (aft % 1);

for (i = 92; i < 99; ++i)
{
printf(",%lu", aft 1 + (aft 2 / 1));
printf("%lu", aft 2 % 1);
aft 1 = aft 1 + bef 1;
bef 1 = aft 1 - bef 1;
aft 2 = aft 2 + bef 2;
bef 2 = aft 2 - bef 2;
}
printf("\n");
return (0);
}
