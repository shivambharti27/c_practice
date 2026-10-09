   //program to check input value is odd or even
  // program is even when n % 2 ==0

#include<stdio.h>
int main(){
    int i ;
      printf("Enter any value to check odd or even :");
      scanf("%d",&i);

      if(i%2==0){
        printf("%d is even",i);

      }
      else{
       printf("%d is odd",i);
      }
      return 0;

}