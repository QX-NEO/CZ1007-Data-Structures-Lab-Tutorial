#include <stdio.h>
int reverseDigits1(int num);
void reverseDigits2(int num, int *result);
int main()
{
     int num, result=999;
     printf("Enter a number: \n");
     scanf("%d", &num);
     printf("reverseDigits1(): %d\n", reverseDigits1(num));
     reverseDigits2(num, &result);
     printf("reverseDigits2(): %d\n", result);
     return 0;
}
int reverseDigits1(int num)
{
    int num2;
    int count =0;
    int power = 1;
    int i =0;
    int sum = 0;

    num2 = num;
    while (num > 0){
        num /= 10;
        count ++;
    }
    for(i=0; i <count; i++){
        power *=10;
        printf("power, %d\n", power);
    }
    while (num2 >0)
    {
        sum += (num2%10)*(power);
        power /= 10;
        num2 /= 10;
    }
    return sum/10;

}
void reverseDigits2(int num, int *result)
{
    /* Write your code here */
    int num2;
    int count =0;
    int power = 1;
    int i =0;
    *result = 0;

    num2 = num;
    while (num > 0){
        num /= 10;
        count ++;
    }
    for(i=0; i <count; i++){
        power *=10;
        printf("power, %d\n", power);
    }
    while (num2 >0)
    {
        *result += (num2%10)*(power);
        power /= 10;
        num2 /= 10;
    }
    *result /= 10;
}
