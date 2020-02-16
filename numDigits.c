#include <stdio.h>
int numDigits1(int num);
void numDigits2(int num, int*result);
int main()
{
    int number , result = 0;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("numDigits1(): %d\n", numDigits1(number));
    numDigits2(number, &result);
    printf("numDigits2(): %d\n", result);
    return 0;
}

int numDigits1(int num)
{
    int pos = 0;
    while (num >0){
        pos ++;
        num = num /10;
    }
    return pos;
}
void numDigits2(int num , int *result)
{
    int pos = 0;
    do {
        pos ++;
        num = num/10;
    }
    while(num >0);
    *result = pos;

    /*result = 0;
    do{
        (*result)++;
        num = num/10;
    } while(num >0);
    */

}
