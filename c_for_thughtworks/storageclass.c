#include<stdio.h>

void counter(){
   
   static int count =0;
   auto int a =0;
   count++;
   printf("%d",count);
   printf("%d",a);  ///value not increase because it is auto variable and scope is only in the function or block
}
int main(){

    counter();
    counter();
    counter();
    counter();
    return 0;
}