#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
   

    printf("Enter string value  to reverse:");
   fgets(str,sizeof(str),stdin);

   int len = 0;
   while(str[len] != '\0'&& str[len] != '\n'){
       len++;
   }


   for(int i = 0;i<len/2;i++){
    char temp = str[i];
    str[i] = str[len-1-i];
    str[len-1-i] = temp;
   }
   printf("Reversed string: %s",str);
}