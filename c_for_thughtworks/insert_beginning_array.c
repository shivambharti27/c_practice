#include <stdio.h>
int main()
{

   int arr[100];
   int length , ele;

   printf("Enter the number of elements in the array (max 100): ");
   scanf("%d", &length);

   printf("Enter the elements of the array: ");
   for(int i = 0; i<length; i++){
    scanf("%d",&arr[i]);
   }


    printf("Enter the element to be inserted at the beginning: ");  
    scanf("%d", &ele);
    length++; // Increase the length of the array to accommodate the new element

    for(int i = length - 1; i > 0; i--){
        arr[i] = arr[i - 1]; // Shift elements to the right
    }
    arr[0] = ele; // Insert the new element at the beginning
    printf("Array after inserting element at the beginning: ");
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}