// #include<stdio.h>
// int main(){
//     int i,j,k;

//     for(i = 0 ; i <= 5;i++){ // for rows

// for(j=5;j>i;j--){  // for space
//     printf(" ");
// }
// for(k=1;k<=i;k++){
//     printf("* ");
// }

// printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int i,j,k;

    for(i = 0 ; i <= 5;i++){ // for rows

for(j=5;j>i;j--){  // for space
    printf(" ");
}
for(k=1;k<=i*2-1;k++){
    printf("* ");
}

printf("\n");
    }
    return 0;
}