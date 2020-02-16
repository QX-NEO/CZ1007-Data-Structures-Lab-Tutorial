# include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character : \n");
    scanf("%c", &ch);

    if( ch >= 'A' && ch <= 'Z' ){
        printf("Upper case letter");
    }

    else if (ch >= 'a' && ch <= 'z'){
        printf("Lower case letter");
    }

    else {
        printf("It is a digit");
    }

return 0;
}
