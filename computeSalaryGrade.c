#include <stdio.h>
int main()
{
 int salary, merit;

 printf("Enter the salary: \n");
 scanf("%d", &salary);
 printf("Enter the merit: \n");
 scanf("%d", &merit);

 if ((salary >= 799)||(salary >= 700 && merit >= 20)){
    printf("The grade: A");
 }
 else if ((salary >= 699) || salary >= 600 && merit >= 10){
    printf("The grade: B");
 }

 else {
        printf("The grade: C");
 }


 return 0;
}

