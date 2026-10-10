//multiplication table
#include<stdio.h>
int main(){
    int i,n,a;
    printf("Enter a value for table :");
    scanf("%d",&n);

    for(i = 1;i<=10;i++){
        a=n*i;
        printf("%d * %d = %d \n",n,i,a);
    }
    return 0;
}