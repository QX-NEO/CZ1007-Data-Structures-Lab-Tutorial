#include <stdio.h>
int square1(int num);
void square2(int num , int *result);
int main()
{
    int number , result = 0;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("square1(): %d\n", square1(number));
    square2(number, &result);
    printf("square2(): %d\n", result);
    return 0;
}
int square1(int num)
{
    int i;
    int ans = 0;
    if (num == 0)
    {
        return 0;
    }

    for (i= 0;i<= num-1; i++){
         ans += (2*i +1);
         /* result +=k;
            k+=2;*/
    }
    return ans;
}

void square2(int num , int *result)
{
    int i;
    *result = 0;


    for (i= 0;i<= num-1; i++){
            if (num == 0)
            {
                break;
            }
         *result += (2*i +1);
    }
    return *result;
}
