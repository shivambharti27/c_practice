//compound interest
#include<stdio.h>
#include<math.h>    // because we have to use pow() function here for calculate power
int main(){
    float p,r,t,ci;   //p stands for principle amount

    printf("Enter values for p , r and t :");
    scanf("%f %f %f",&p,&r,&t);

    ci = p *pow((1+r/100),t);

    printf("compound interest : %.3f",ci);
    return 0;
}