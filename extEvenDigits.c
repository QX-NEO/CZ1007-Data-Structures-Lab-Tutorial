#include <stdio.h>
#define INIT_VALUE 999
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);
int main()
{
 int number, result = INIT_VALUE;

 printf("Enter a number: \n");
 scanf("%d", &number);
 printf("extEvenDigits1(): %d\n", extEvenDigits1(number));
 extEvenDigits2(number, &result);
 printf("extEvenDigits2(): %d\n", result);
 return 0;
}
int extEvenDigits1(int num)
{
    int value =0;
    int sum = 0;
    int i = 0;
    int power = 10;
 /* Write your code here */
    while(num > 0)
    {
        value = num%10;
        if (value % 2 == 0)
        {
            if (i==0)
            {
                sum += value;
            }
            else{
                value *= power;
                sum += value;
                power *= 10;
            }
            i++;
        }

        num /=10;
    }
    if(sum == 0)
        return -1;
    else
        return sum;
}
void extEvenDigits2(int num, int *result)
{
 /* Write your code here */
    int value =0;
    *result = -1;
    int i = 0;
    int power = 10;
    while(num > 0)
    {
        value = num%10;
        if (value % 2 == 0)
        {
            if (i==0)
            {
                *result += (value+1);
            }
            else{
                value *= power;
                *result += value;
                power *= 10;
            }
            i++;
        }

        num /=10;
    }

}




