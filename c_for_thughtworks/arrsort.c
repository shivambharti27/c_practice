#include<stdio.h>
int main(){
    int arr[100];
    int length;

    printf("Enter the number of elements in the array (max 100): ");
    scanf("%d", &length);
    for(int i = 0; i < length; i++) {
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0;i<length;i++){
        for(int j = i+1;j<length;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("sorted array is :");
    for(int i = 0 ;i<length;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}