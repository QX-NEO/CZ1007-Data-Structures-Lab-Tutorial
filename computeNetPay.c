#include <stdio.h>
int main()
{
 int hours;
 float tax, grossPay, netPay;

 printf("Enter hours of work: \n");
 scanf("%d", &hours);
 if(hours > 40){
    grossPay = 40*6 + ((hours - 40)*6)*3/2;
 }
 else{
    grossPay = hours*6;
 }

if (grossPay > 1500){
    tax = 1000*0.1 + 500 *0.2 +(grossPay-1500)*0.3;
}

else if (grossPay > 1000 ){
    tax = 1000*0.1 + (grossPay-1000);
}

else {
    tax = grossPay *0.1;
}

netPay = grossPay - tax;

 printf("Gross pay = %.2f\n", grossPay);
 printf("Tax = %.2f\n", tax);
 printf("Net pay = %.2f\n", netPay);
 return 0;
}
