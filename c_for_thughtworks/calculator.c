#include<stdio.h>
int main(){

   int a,b,c,k,z;
   float j,p,l;
   do{
    printf("Enter your operation : 1.for addtion \n 2.for subtraction\n 3. for multiplication\n");
    scanf("%d",&k);

    switch(k){

        case 1:
        printf("Enter first number:");
        scanf("%d",&a);

        printf("Enter second number :");
        scanf("%d",&b);

        c= a+b;
        printf("\n%d",c);
        break;



         case 2:
        printf("Enter first number:");
        scanf("%d",&a);

        printf("Enter second number :");
        scanf("%d",&b);

        c= a-b;
        printf("\n%d\n",c);
        break;



         case 3:
        printf("Enter first number:");
        scanf("%d",&a);

        printf("Enter second number :");
        scanf("%d",&b);
        break;

        l= j*p;
        printf("%f\n",l);
        break;

        default :
         printf("invalid operator");
      }
    printf("do you want to continue (press 0 for continue  and 1 for exit.....)");
    scanf("%d",&z);
}
while (z==0);


   
}