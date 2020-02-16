#include <stdio.h>
int divide1(int m, int n, int *r);
void divide2(int m, int n, int *q, int *r);
int main()
{
    int m, n, q, r;
    printf("Enter two numbers (m and n): \n");
    scanf("%d %d", &m, &n);

    q = divide1(m, n, &r);
    printf("divide1(): quotient %d remainder %d\n", q, r);

    divide2(m, n, &q, &r);
    printf("divide2(): quotient %d remainder %d\n", q, r);
    return 0;
}
int divide1(int m, int n, int *r)
{
    /* Write your code here */
    int count = 0;

    while(m >0){
        m -=n;
        if (m>0)
            (count)++;
    }
    *r = m+n;
    if (m == 0)
    {
        *r = 0;
        return 0;
    }
    else
        return count;
}
void divide2(int m, int n, int *q, int *r)
{
    /* Write your code here */
    if (m == 0)
    {
         0;
    }
    *q = 0;
    *r = 0;
    while(m >0){
        m -=n;
        if (m>0)
            (*q)++;
    }
    *r = m+n;
    if (m == 0)
    {
        *r = 0;
    }

}
