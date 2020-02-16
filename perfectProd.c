#include <stdio.h>
int perfectProd1(int num);
void perfectProd2(int num, int *prod);
int main()
{
    int number, result=0;

    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("Calling perfectProd1() \n");
    printf("perfectProd1(): %d\n", perfectProd1(number));

    printf("Calling perfectProd2() \n");
    perfectProd2(number, &result);
    printf("perfectProd2(): %d\n", result);
    return 0;
}
int perfectProd1(int num)
{
    /* Write your code here */
    int i = 1;
    int a = 1;
    int b = 0;
    int c = 1;


    for(i=1; i<=num ; i++)
    {
        while (a<=i)
        {
            if(i%a ==0 && a!=i)
                c += a;
        }
        if( c==i)
            b *c;
    }
    return b;
}



void perfectProd2(int num, int *prod)
{
    /* Write your code here */
}
