
#include <stdio.h>
typedef struct {
 char name[20];
 int age;
} Person;
void readData(Person *p);
Person findMiddleAge(Person *p);
int main()
{
     Person man[3], middle;
     readData(man);
     middle = findMiddleAge(man);
     printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
     return 0;
}

void readData(Person *p)
{
    /* Write your program code here */
    int i = 0;
    while (i <3){
        printf("Enter person %d: \n", i+1);
        scanf("%s",&p[i].name);
        scanf("%d",&p[i].age);
        i++;
    }
}
Person findMiddleAge(Person *p)
{
    /* Write your program code here */
    int max =0;
    int min =0;
    int i =0;
    for (i =0; i<3; i++)
    {
        if(p[i].age < p[min].age )
        {
            min = i;
        }
        if(p[i].age > p[max].age )
        {
            max= i;
        }
    }
    for(i=0; i<3; i++)
    {
        if(i != min && i !=max)
            return p[i];
    }
}

