#include<stdio.h>
int main(){
    int *p,*q,*sum,a,b;

   
    printf("Enter first number :");
    scanf("%d",&a);

    printf("Enter second number :");
    scanf("%d",&b);
     p = &a;
    q = &b;

    *sum = *p + *q;

    printf("%d",*sum);
    return 0;
    
}