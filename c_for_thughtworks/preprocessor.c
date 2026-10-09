//preprocessor is a program that process the source code 
// here we're gonna make a simple program with preprocessor and macros 

//program for salary calculation after deducted DA AND HRA

#include<stdio.h>
#define DA 0.10
#define HRA 0.20   //MACRO
int fun(){
        double total_salary;
        double basic_pay;
        
        printf("Enter your salary :");
        scanf("%lf",&total_salary);
        if(total_salary>0){
        
            basic_pay = total_salary/(1+DA+HRA);
        }
        printf(" basic pay :%.2f",basic_pay);
        
        
         return 0;
    }

int main(){

    // this is wrong method
// double total_salary = 700000;
//     double basic_pay;

//     // we know total salary = basic pay+da+hra
//    basic_pay = total_salary -((DA*total_salary) +(HRA*total_salary));

//     printf("%.2f\n",basic_pay);

    //this is right function to calculate 
    fun();


    
    
        
    return 0;

}