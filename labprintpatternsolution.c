#include <stdio.h>
int main()
{
    int row, col, height;
    int num = 0;
    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("Pattern: \n");
    for (row = 1; row <= height; row++)
    {
        for (col = 1; col <= row+1; col++)
        {
            printf("%d",(num+1));// print numbers
        }
        num = (num+1)%3;
        printf("\n");
    }
    return 0;
}
