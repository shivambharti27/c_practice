#include<stdio.h>
int main(){
    int arr[100];
    int length ,ele,position;
    printf("Enter the number of elements in the array (max 100): ");
    scanf("%d", &length);
    printf("Enter the elements of the array: ");
    for(int i = 0;i<length;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &ele);

    printf("Enter the position where the element should be inserted (0 to %d): ", length);
    scanf("%d", &position);

    if(position < 0 || position > length){
        printf("Invalid position! Please enter a position between 0 and %d.\n", length);
        return 1; // Exit the program with an error code
    }

    length++;

    for(int i =length;i>position;i--){
        arr[i] = arr[i-1]; // Shift elements to the right
    }

    arr[position] = ele; // Insert the new element at the specified position

    printf("Array after inserting element at position %d: ", position);
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}