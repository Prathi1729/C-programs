#include<stdio.h>
int fun(int *array,int num)
{
  
  int max=0;
  for(int i=0;i<num;i++)
  {
    if(array[i]>max)
      max=array[i];
  }
 
  return max;
}

int main()
{
  
  int array[100];
  int i,num,val;
  printf("Enter the number of elements to enter:\n");
  
  val=scanf("%d",&num);
  
  if(val==0)
    printf("Enter the number only\n");
  else
  {
    printf("enter the elements:\n");
    for(i=0;i<num;i++)
      scanf("%d",&array[i]);
    printf("The largest element in an array is:%d\n",fun(array,num));
  }
  return 0;
}

