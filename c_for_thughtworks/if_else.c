//program for withdraw only 
//there are certain conditions miss we will add it soon 

#include<stdio.h>
int main(){

    float withdraw_amount,Total_balance = 5000;
    printf("Enter your withdraw amount :");
    scanf("%f",&withdraw_amount);
 
    if(withdraw_amount <= 0 ){
        printf("Please Enter a valid amount...");
    }

     else if(withdraw_amount>Total_balance){
        printf("not sufficient amount to withdraw\n");
    }
    else{
        printf("Withdraw successfull\n");
        Total_balance = Total_balance - withdraw_amount;
    }

    

    printf("Your balance = %.2f",Total_balance);


}