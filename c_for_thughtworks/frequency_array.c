
#include<stdio.h>
int main(){
     
    int arr[100],n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int freq[100] = {0};
    for(i=0;i<n;i++){
        freq[arr[i]]++;
    }
    printf("Frequency of each element:\n");
    for(i=0;i<100;i++){
        if(freq[i]!=0){
            printf("%d occurs %d times\n",i,freq[i]);
        }
    }
    return 0;
}



    