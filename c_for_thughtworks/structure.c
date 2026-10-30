#include<stdio.h>
#include<string.h>

//second type of define structure by typedef
typedef struct{
    int age ;
    char name[20];
}students;
 int main(){


  students s = {23,"shivam"};
    
    printf("%d\n",s.age);
    printf("%s",s.name);
    
}





//     struct students{
//         char name[20];
//         int rollno;
//     };
// int main(){
//     struct students s = {"shivam", 123};
//     // struct students s;
//     // s.name = "shivam";
//     // s.rollno = 123;
//     // printf("Name: %s\n", s.name);
//     // printf("Roll No: %d\n", s.rollno);



//     //run time p value lena 
//     // printf("Enter name: ");
//     // scanf("%s",s.name);
//     // printf("Enter roll number: ");  
//     // scanf("%d",&s.rollno);




// }