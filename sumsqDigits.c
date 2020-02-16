#include <stdio.h>
int sumSqDigits1(int num);
void sumSqDigits2(int num, int *result);
int main()
{
    int num, result;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("sumSqDigits1(): %d\n", sumSqDigits1(num));
    sumSqDigits2(num, &result);
    printf("sumSqDigits2(): %d\n", result);
    return 0;
}
int sumSqDigits1(int num)
{
    /* Write your code here */
    int value;
    int sum = 0;
    while (num >0){
        value = num %10;
        value *= value;
        sum += value;
        num /= 10;
    }
    return sum;
}
void sumSqDigits2(int num, int *result)
{
    /* Write your code here */
    int value;
    *result =0;
    while (num >0){
        value = num %10;
        value *= value;
        *result += value;
        num /= 10;
    }

}
