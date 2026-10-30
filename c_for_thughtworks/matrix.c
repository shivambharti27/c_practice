#include<stdio.h>
int main(){
    int n,matrix[10][10],m;
    printf("Enter the number of rows and columns of the matrix (max 10): ");
    scanf("%d %d",&n,&m);
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

