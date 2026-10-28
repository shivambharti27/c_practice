// #include<stdio.h>
// int natural(int num){
//     if(num>0){
//         return num +natural(num-1);
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//    int value = natural(5);
//   printf("The sum of first 5 natural numbers is : %d",value);
// }


#include<stdio.h>
int natural(int num){
if(num>0){
    return num +natural(num-1);
}
else{
    return 0;
}
}
   
int main(){
    int value = natural(5);
    printf("The sum of first 5 natural numbers is : %d",value);
}

