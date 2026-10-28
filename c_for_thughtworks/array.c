#include<stdio.h>
int main(){
    int arr[]={1,34,5,8,6};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    printf("sizeof(arr) =%d\n",sizeof(arr));
    printf("size of array =%d\n",size);
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}