//function like macro implementation

#include<stdio.h>
# define square(x) ((x)*(x))

int main(){
    printf("%d\n",square(7));

    //or
    int b = 9;
    printf("%d",square(b));
    return 0;
}