#include<stdio.h> 
int main(){

    int fact=1,n;

    printf("Enter number :");
    scanf("%d",&n);

    fact:
    while(n>0){
        fact = fact*n;
        n--;
        goto fact;
    }
    printf(":factoreal  is %d",fact);
    return 0;
}
