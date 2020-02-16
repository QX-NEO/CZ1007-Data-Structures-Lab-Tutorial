# include <stdio.h>

#include <stdio.h>
void main()
{
    int height = 3;
    int row;
    int col[3] = {1,2,3};
    int num = 0 ;

    printf("enter height: ");
    scanf("%d", &num);
    num += 3;
    for(height=3; height<= num; height++){
        for(row=3; row<=height; row++ ){
            printf("%d",col[height%3]);
        }
        printf("\n");
    }
}
