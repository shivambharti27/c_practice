#include<stdio.h>
int main(){
    int a[5] = {50,40,30,20,10};
    int low = 0 ,  high = 4,mid;
    int key = 30;

    while(low <= high){
        mid =( low + high) / 2;
        if (a[mid] == key){
            printf("element found at %d ",mid + 1);
            break;
        }
        else if(key < a[mid]){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if (low > high){
        printf("element not found ...");
    }
    return 0;
}