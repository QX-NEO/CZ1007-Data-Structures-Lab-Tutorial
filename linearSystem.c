
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*solving the linear equation a1.x + b1.y =c1 , a2.x + b2.y =c1 */


int main()
{
    double a1;
    double a2;
    double b1;
    double b2;
    double c1;
    double c2;

    printf("enter value for a1: ");
    scanf("%f", &a1);

    printf("enter value for a2: ");
    scanf("%f", &a2);

    printf("enter value for b1: ");
    scanf("%f", &b1);

    printf("enter value for b2: ");
    scanf("%f", &b2);

    printf("enter value for c1: ");
    scanf("%f", &c1);

    printf("enter value for c2: ");
    scanf("%f", &c2);

    if( a1*b2 - a2*b1 == 0){
        printf("Unable to compute because denominator is equal to zero");
    }
    else{
        double x = (b2*c1 - b1*c2)/(a1*b2 - a2*b1);
        double y = (a1*c2 - a2*c1)/(a1*b2 - a2*b1);
        printf("value of x is %d", x);
        printf("value of y is %d",y);

    }



    return 0;

}




