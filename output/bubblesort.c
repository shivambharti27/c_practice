#include<stdio.h>
int main()
{
int a[5] = {5,4,3,2,1};
int i,j,temp;
  for(i=0;i<5;i++)
  {
    for(j=0;j<4-i;j++)
    {
        if(a[j] > a[j+1])
        {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
        
    }
  }
  printf("sorted array :");
  for(i=0;i<5;i++)
  {
    printf("%d ",a[i]);
  }
  return 0;
}