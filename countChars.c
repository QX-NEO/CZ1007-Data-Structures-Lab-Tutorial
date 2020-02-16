#include <stdio.h>
#include <stdlib.h>


int main()
{
    int ccount = 0;
    int dcount = 0;
    int index = 0;
    char ch[20];

    printf("Enter your characters (#to end): \n");
    gets(ch);
    for (index =0; ch[index] != '#'; index++){
            printf("%c", ch[index]);
            printf("\n");
            if (ch[index] >= 'a' && ch[index] <= 'z'){
                ccount ++;
            }
            else{
                dcount ++;
            }
    }


    printf("The number of digits: %d\n",dcount);
    printf("the number of letters: %d\n", ccount);
    return 0;

}

