#include<stdio.h>
int main(){
    int arr[]={1,34,5,8,6};
  arr[5]=16;
  printf("%d",arr[5]);
  for(int i=0;i<6;i++){
    printf("%d\n",arr[i]);
  }
}