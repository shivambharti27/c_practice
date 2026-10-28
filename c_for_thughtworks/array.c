// #include<stdio.h>
// int main(){
//     int arr[]={1,34,5,8,6};
//     int size;
//     size = sizeof(arr)/sizeof(arr[0]);
//     printf("sizeof(arr) =%d\n",sizeof(arr));
//     printf("size of array =%d\n",size);
//     for(int i=0;i<size;i++){
//         printf("%d\n",arr[i]);
//     }
// }
#include<stdio.h>
int main(){
    int search;
    int arr[]={1,34,5,8,6};
    int length = sizeof(arr)/sizeof(arr[0]);

    printf("Enter elemet to search :");
    scanf("%d",&search);
      
    for(int i=0;i<=length;i++){
        if(arr[i]==search){
            printf("Element found at index :%d",i);
            break;
        }
        else{
            printf("Element not found");
        }
    }
    return 0;
    
    }