#include<stdio.h>
int main(){
  /* printf("Enter the  value for a and b :");
    scanf("%d %d",&a,&b);

    c = a;
    a = b;
   b = c;

   printf("after swap a = %d and b = %d  ",a,b);

   return 0;
   */


   // second method to swap numbers 

 /*   int a,b;

    printf("Enter the  value for a :");
    scanf("%d",&a);

    printf("Enter the value for b :");
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a = a-b;
 
    printf("after swap  a = %d b = %d",a ,b);

    */

//    third method 
int a , b;

       printf("Enter the  value for a :");
    scanf("%d",&a);

   printf("Enter the value for b :");
    scanf("%d",&b);
    printf("before swapping  value of a = %d and b = %d\n",a,b );

    a = a^b;
    b = a^b;
    a = a^b;
    printf("After swap a = %d and b = %d",a,b);
    


    return 0;


}