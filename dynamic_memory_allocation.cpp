#include<stdio.h>
#include<stdlib.h>
int *a,*b,*c;
void Even(int n)
{
  a=(int *)malloc(n*sizeof(int));
  if(a==NULL)
    printf("Memory Not Allocated\n");
  else
  {
  printf("Enter the %d numbers\n",n);
  for(int i=0;i<n;i++)
    scanf("%d",a+i);    

  printf("\nEven Numbers Are:\n");
  for(int i=0;i<n;i++)
  {
    if(i[a]%2==0)
      printf("%d\n",i[a]);
  }
  }
}
void Max(int k)
{
  b=(int *)calloc(k,sizeof(int));
  printf("Enter the %d numbers\n",k);
  if(b==NULL)
    printf("Memory Not Allocatedn");
  else
  {
    int max=0;
    for(int i=0;i<k;i++)
      scanf("%d",b+i);    
    for(int j=0;j<k;j++)
    {
      if(j[b]>max)
        max=j[b];
    }
    printf("The Maximum Element is:%d\n",max);
  }
}
int main()
{
  int num,k,len;
  while(1)
  {
    printf("Enter Any one:1.Malloc 2.Calloc 3.Realloc 4.Free\n");
    scanf("%d",&num);
    switch(num)
    {
      case 1: printf("Malloc Creation\n");
              Even(5);
              break;

      case 2: printf("Calloc Creation\n");
              Max(5);
              break;            

      case 3: printf("Realloc Creation\n");
              printf("Calloc Memory Change\n");
              printf("Enter the Memory to Change:\n");
              scanf("%d",&len);
              c=(int *)realloc(b,len);
              Max(len);
              break;      

      case 4: printf("Free\n");     
              printf("deallocating malloc\n");
              free(a);
              break;
              
      default:
              printf("Invalid Number.Enter the correct Number\n");
    }
  }
  return 0;
}
