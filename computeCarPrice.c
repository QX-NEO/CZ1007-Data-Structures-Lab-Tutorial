#include <stdio.h>
int main()
{
 int list, coe = 0, cat;
 double discounted, luxury = 0 , gst, total;
 printf("Please enter the list price: \n");
 scanf("%d", &list);
 printf("Please enter the category: \n");
 scanf("%d", &cat);

 discounted = list*0.9;

 if (discounted >= 100000){
       luxury = discounted * 110;
       gst = luxury* 0.03;
        total = luxury+ gst;

 }

 else{
        gst = discounted*0.03;
        total = gst + discounted;
 }


 switch(cat){
     case 1:
        coe = 70000;
        break;

     case 2:
        coe = 80000;
        break;

     case 3:
        coe = 23000;
        break;

     case 4:
        coe = 70000;
        break;

     default:
        printf("invalid");
 }

 total += coe;

 printf("Total price is $%.2lf\n", total);
 return 0;
}
