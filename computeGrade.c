#include <stdio.h>
int main()
{
    int studentNumber = 0, mark =0, grade=0;

    /*while(studentNumber != -1){

        printf("Enter Student ID: \n");
        scanf("%d", &studentNumber);

        printf("Enter Mark: ");
        scanf("%d",&mark);
        if (mark >= 75)
                printf("Grade = A\n");
        else if (mark >= 65)
            printf("Grade = B\n");

        else if (mark >= 55)
            printf("Grade = C\n");

        else if (mark >= 45)
            printf("Grade = D\n");

        else
            printf("Grade = F\n");

        } */

        while (studentNumber != -1){
            printf("Enter Student ID: \n");
            scanf("%d", &studentNumber);

            if (studentNumber == -1){
              break;
            }

            else{

                printf("Enter Marks: ");
                scanf("%d", &mark);

                if(mark >= 75){
                    grade = 1;
                    printf("Grade = A\n");
                }

                else if(mark >= 65){
                        grade = 2;
                }

                else if (mark >= 55){
                    grade = 3;
                }

                else if (mark >= 45){
                        grade = 4;

                }
                else {
                    grade = 5;
                }

                switch(grade){

                    case 1:
                        printf("Grade = A \n");
                        break;

                    case 2:
                        printf("Grade = B \n");
                        break;

                    case 3:
                        printf("Grade = C \n");
                        break;

                    case 4:
                        printf("Grade = D \n");
                        break;

                    case 5:
                        printf("Grade = F \n");
                        break;

                    default:
                        printf("please enter a correct grade");

                }
            }

        }

    return 0;

}


