#include<stdio.h>
int main(){
    int n,a=0,b=1,c=2,i,d;

    printf("Enter number of terms :");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("%d ",a);
        d = a+b+c;
        a=b;
        b=c;
        c = d;
    }

}