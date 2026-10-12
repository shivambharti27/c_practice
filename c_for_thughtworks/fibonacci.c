// example of fibonacci = 0,1,1,2,3,5,8
#include<stdio.h>
int main(){
    int n,a=0,b=1,i,c;

    printf("Enter number of terms :");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("%d ",a);
        c = a+b;
        a=b;
        b=c;
    }

}