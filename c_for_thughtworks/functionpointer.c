#include<stdio.h>
int add( int a,int b){
    return a+b;
}
int main(){
     int (*p)(int a,int b);

     p = add;
     printf("%d",p(4,5));

}