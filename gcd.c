#include <stdio.h>
int gcd1(int num1, int num2);
void gcd2(int num1, int num2, int *result);
int main()
{
     int x,y,result=-1;

     printf("Enter 2 numbers: \n");
     scanf("%d %d", &x, &y);

     printf("gcd1(): %d\n", gcd1(x, y));
     gcd2(x,y,&result);

     printf("gcd2(): %d\n", result);
     return 0;
}
int gcd1(int num1, int num2)
{
    /* Write your code here */
    int a = 1;
    int b = 0;
    if (num1 >= num2){
        for (a; a <= num1; a++)
        {
            if(num1%a == 0 && num2%a == 0){
                     b = a;
            }
        }
        return b;
    }
    else{
        for (a; a <= num2; a++)
        {
            if(num1%a == 0 && num2%a == 0){
                b = a;
            }
        }
        return b;

    }

}
void gcd2(int num1, int num2, int *result)
{
    /* Write your code here */
    int a = 1;
    int b = 0;
    if (num1 >= num2){
        for (a; a <= num1; a++)
        {
            if(num1%a == 0 && num2%a == 0){
                     *result = a;
            }
        }
        return b;
    }
    else{
        for (a; a <= num2; a++)
        {
            if(num1%a == 0 && num2%a == 0){
                *result = a;
            }
        }
    }
}
