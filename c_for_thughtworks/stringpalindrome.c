#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int len = 0;

    printf("Enter string value to check palindrome:");
    fgets(str,sizeof(str),stdin);

    //len of string
    while(str[len] !='\0' && str[len] != '\n'){
        len++;
    }
 
    char original_string[100];
    strcpy(original_string,str);

    for(int i=0;i<len/2;i++){
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }

    if(strcmp(original_string,str)==0){
        printf("The string is palindrome");
    }
    else{
        printf("The string is not palindrome");
    }



}