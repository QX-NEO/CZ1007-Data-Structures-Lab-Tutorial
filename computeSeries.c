#include <stdio.h>
int main()
{
    float result =1.0,x, numerator = 1.0, individual, n, denominator, sumdenom=1;

    printf("Enter x: ");
    scanf("%f", &x);

    for (n=1 ; n<= 10; n++)
    {
        numerator = 1;
        sumdenom *= n;
        for(denominator =1 ; denominator <= n; denominator++)
        {
            numerator *= x;

        }
        individual = numerator/sumdenom;
        result += individual;
    }

    printf("Result =%.2f\n", result);
    return 0;

}
