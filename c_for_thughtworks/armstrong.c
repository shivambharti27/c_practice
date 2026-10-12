//Armstrong number check
//condition  if suppose number is 153 then 1^3+5^3+3^3 = 153 then it is armstrong..

#include<stdio.h>
int main(){

    int n,r,original,arm = 0;

    printf("Enter any number to check :");
    scanf("%d",&n);

    original = n;

     while(n>0){

        r = n%10;
        arm = arm + (r*r*r);


        // if we want to check four digit armstrong number we have to use (r*r*r*r);
        n = n/10;
     }

     if(original == arm ){
        printf("%d is armstrong number..",original);
     }
     else {
        printf("%d is not armstrong number ..",original);
     }
     return 0;

    
}
