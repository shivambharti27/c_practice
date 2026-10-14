#include<stdio.h>
extern int a;  ///extern variable is declared in another file and it is used in this file
int main(){

  printf("%d",a);
  return 0;
}