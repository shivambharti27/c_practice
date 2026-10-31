#include<stdio.h>
int main(){

    int *p,*q,temp;
    int a,b;

    printf("Enter first value :");
    scanf("%d",&a);

    printf("Enter second value :");
    scanf("%d",&b);

    p = &a;
    q = &b;
   

    temp = *p;
    *p = *q;
    *q = temp;


    printf(" after swap value of a and b is %d %d",*p,*q );

    return 0;


}