#include <stdio.h>
void readInput(int *id, int *noOfHours, int *payRate);
double computeSalary1(int noOfHours, int payRate);
void computeSalary2(int noOfHours, int payRate, double *grossPay);
int main()
{
int id = -1, noOfHours, payRate;
double grossPay;

readInput(&id, &noOfHours, &payRate);

while (id != -1) {
    printf("computeSalary1(): ");
    grossPay = computeSalary1(noOfHours, payRate);
    printf("ID %d grossPay %.2f \n", id, grossPay);
    printf("computeSalary2(): ");

    computeSalary2(noOfHours, payRate, &grossPay);

    printf("ID %d grossPay %.2f\n", id, grossPay);
    readInput(&id, &noOfHours, &payRate);
}
 return 0;
}
void readInput(int *id, int *noOfHours, int *payRate)
{
    /* Write your code here */
    printf("Enter ID (-1 to end): \n");
    scanf("%d", id);

    printf("Enter number of hours: \n");
    scanf("%d", noOfHours);

    printf("Enter pay rate : \n");
    scanf("%d", payRate);

    if (*payRate<0 || *noOfHours <0)
    {
        *id = -1;
    }
}
double computeSalary1(int noOfHours, int payRate)
{
    /* Write your code here */
    double gross;
    double bonus;
    if(noOfHours > 160 ){
        bonus = (noOfHours-160)*1.5*payRate;
        gross = 160*payRate + bonus;
        return gross;
    }
    else
    {
        gross = payRate*noOfHours;
        return gross;
    }

}
void computeSalary2(int noOfHours, int payRate, double *grossPay)
{
    /* Write your code here */
    double bonus;
    if(noOfHours > 160 ){
        bonus = (noOfHours-160)*1.5*payRate;
        *grossPay = 160*payRate + bonus;
    }
    else
    {
        *grossPay = payRate*noOfHours;
    }

}
