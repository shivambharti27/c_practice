#include<stdio.h>
int main(){
    int a,b,num1,num2,gcd,lcm,temp;

    printf("Enter the first value :");
    scanf("%d",&num1);

    printf("Enter the second value :");
    scanf("%d",&num2);

a = num1;
b = num2;

while(b != 0){

temp = b;
b = a%b;
a  = temp;
}
gcd = a;
 lcm = (num1*num2)/gcd;

 printf("GCD of %d and %d is : %d\n",num1,num2,gcd);
 printf("LCM of %d and %d is : %d\n",num1,num2,lcm);

    return 0;   
}