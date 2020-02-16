#include <stdio.h>
double computePay1(int noOfHours, int payRate);
void computePay2(int noOfHours, int payRate, double *grossPay);
int main()
{
    int noOfHours, payRate;
    double grossPay;
    printf("Enter number of hours: \n");
    scanf("%d", &noOfHours);

    printf("Enter hourly pay rate: \n");
    scanf("%d", &payRate);

    printf("computePay1(): %.2f\n", computePay1(noOfHours, payRate));
    computePay2(noOfHours, payRate, &grossPay);

    printf("computePay2(): %.2f\n", grossPay);
    return 0;
}
double computePay1(int noOfHours, int payRate)
{
    /* Write your code here */
    int bonus;
    int total;
    if (noOfHours > 160)
    {
        noOfHours -= 160;
        bonus = 1.5*payRate*noOfHours;
        total = bonus+160* payRate;
        return total;
    }
    else
    {
        noOfHours *= payRate;
        return noOfHours;
    }

}
void computePay2(int noOfHours, int payRate, double *grossPay)
{
    /* Write your code here */
    int bonus;
    if (noOfHours > 160)
    {
        noOfHours -= 160;
        bonus = 1.5*payRate*noOfHours;
        *grossPay = bonus+160* payRate;

        return *grossPay;
    }
    else
    {
        *grossPay = noOfHours*payRate;
        return *grossPay;
    }

}
