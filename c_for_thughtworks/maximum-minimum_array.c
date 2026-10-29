#include<stdio.h>
int main(){
    int arr[] = {1,34,5,8,6,3,2,9,7};

    int length = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];
    for(int i=0;i<length;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);
}