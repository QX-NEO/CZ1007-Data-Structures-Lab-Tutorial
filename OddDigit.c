
#include <stdio.h>
#define INIT_VALUE 0
int extOddDigits1(int num);
void extOddDigits2(int num, int *result);
int main()
{
    int number, result = INIT_VALUE;

    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extOddDigits1(): %d\n", extOddDigits1(number));
    extOddDigits2(number, &result);
    printf("extOddDigits2(): %d\n", result);
    return 0;
}
int extOddDigits1(int num)
{
   int i=1, newValue=0;

   while(num != 0)
   {
       if((num % 10) % 2 != 0)
       {
           newValue += (num % 10) * i;
           i *= 10;
       }

       num /= 10;
   }

   return (newValue != 0) ? newValue : -1;
}
void extOddDigits2(int num, int *result)
{
   int i=1, newValue=0;

   while(num != 0)
   {
       if((num % 10) % 2 != 0)
       {
           *result += (num % 10) * i;
           i *= 10;
       }

       num /= 10;
   }

   if(*result == 0)
    *result = -1;
}
