#include<stdio.h>
int main(){
    float amount,time,interest,si;

    printf("Enter amount :");
    scanf("%f",&amount);

    printf(" Enter time :");
    scanf("%f",&time);

    printf("Enter interest rate :");
    scanf("%f",&interest);

    si = amount * time * interest/100;

    printf("simple interest : %.3f",si);
    return 0;
}