#include<stdio.h>
#define MAX 5
int stack[MAX];
  int top = -1;
  void push(int value){
    if(top == MAX -1)
    {
        printf("stack is overflow...");
    }
    else{
        top ++;
        stack[top] = value;
    }
  }
  void pop()
  {
    if(top == -1){
        printf(" stack is underflow ...");
    }
    else{
        popedvalue = stack[top]
        top--;
        return popedvalue;
    }
  }
int main(){
    pop(30);
    printf("%d is pushed in stack",value);
    return 0;

}