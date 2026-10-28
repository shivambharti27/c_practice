#include<stdio.h>
int main(){
    int arr[] = {1, 34, 5, 8, 6};
    int sum = 0;

    for(int i=0;i<=sizeof(arr)/sizeof(arr[0]);i++){
        sum = sum +arr[i];
    }
    printf("Sum of array elements: %d", sum);
    return 0;
}