#include <stdio.h>
int main()
{
 int row, col;
 int i, input;
 printf("Enter an input number (between 1 and 9): \n");
 scanf("%d", &input);
 printf("Multiplication Table: \n");

 for (col =1; col <= input ; col++){
     printf("\t%d", col);
     }
 printf("\n");

 for (row =1; row <= input ; row++){
    printf("%d", row);

    for (i=1 ; i <= row ; i ++){
        printf("\t%d", row*i);
    }
    printf("\n");
 }
 return 0;

}








