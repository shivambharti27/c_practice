#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
    int a = 10;
    float b = 12.3;
    char c = 'A';
    double d = 32443.334;

  printf(" int :%d\n",a);
  printf("%f\n",b);
  printf("%c\n",c);
  printf("%f\n",d);

  //size of data type
  printf(" int :%d byte\n",sizeof(int));
  printf(" float :%d byte\n",sizeof(float));
  printf("doubel :%d byte\n",sizeof(double));
  printf(" char :%d byte\n",sizeof(char));


  // if we want to check range of int float double and char

  //first we add two headers file
  //1 #include<limits.h>
  //#include<float.h>

printf("\ncheck range of multiple datatypes\n");
  printf("%d t0 %d :int range\n",INT_MIN,INT_MAX);
  printf("%e to %e :float range\n",FLT_MIN,FLT_MAX);
  printf("%e to %e :double range\n",DBL_MIN,DBL_MAX);
  printf("%d to %d :char range\n",CHAR_MIN,CHAR_MAX);
 
  return 0;
}