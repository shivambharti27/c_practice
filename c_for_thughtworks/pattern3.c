//   1
//   22
//   333
//   4444
//   55555

// #include<stdio.h>
// int main(){
//     int i ,k;

//     for(i=1 ; i<=5 ; i++){

//         for(k=1 ; k<=i ; k++){
//             printf("%d",i);
//         }
//         printf("\n");
//     }
//     return 0;
    
// }




// next program

//A
//BC
//DEF
//GHIJ
//LMNOP

#include<stdio.h>
int main(){

 char i,j;

 for(i='A';i<='E';i++){
    for(j='A';j<=i;j++){
        printf("%c",i);

    }
    printf("\n");
 }
 return 0;
}