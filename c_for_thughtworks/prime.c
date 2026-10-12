// program to check a number  is prime or not


#include<stdio.h>
int main(){
    int n,i,j;

    printf("Enter your number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=2;j<=i;j++){
            if(i%j==0){
               break;
            }
           
        }
        if(i==j){
            printf("%d\n",j);
        }

       
    }
      
    
    return 0;
}