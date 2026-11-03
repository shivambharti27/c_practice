#include<stdio.h>
#include<stdlib.h>
int main(){

    int *x;
    x = (int*)malloc(sizeof(int));
    *x = 89;
    printf("Value of x: %d\n", *x);



    int *g;
    g = (int*)calloc(5,sizeof(int));
    printf("Enter 5 values for g:\n");
   for(int i = 0;i<5;i++){
    scanf("%d",&g[i]);
   }
   for(int i = 0;i<5;i++){
    printf("Value of g[%d]: %d\n", i, g[i]);
   }

   g = (int*)realloc(g,10*sizeof(int));
   printf("Values of g after reallocation:\n");
   for(int i = 0;i<10;i++){
    printf("Value of g[%d]: %d\n", i, g[i]);
   }

   free(g);
   free(x);
}