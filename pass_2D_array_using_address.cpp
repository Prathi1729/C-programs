#include<stdio.h>
int matrix(int (*b)[3],int m,int n) 
{
  int *tr=b[0];
  int sum=0;
  for(int i=0;i<m;i++)
  {
    printf("\n");
    for(int j=0;j<n;j++)
       printf("%d ",b[i][j]); 
  }
  printf("\n");
  for(int i=0;i<m;i++)   
  {         
    for(int j=0;j<n;j++)
      b[i][j]=b[i][j]*b[i][j]*b[i][j];  
  }
  
  for(int i=0;i<m;i++) 
  { 
    printf("\n");
    for(int j=0;j<n;j++)
      printf("%d ", b[i][j]);
  }
  printf("\n");
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
      sum=b[i][j]+sum; 
  }
  return sum;
}
int main()
{
  int a[3][3]=
  {
    {1,2,3},{4,5,6},{7,8,9}
  };
  printf("\nThe sum of all cubed elements is:%d\n",matrix(a,3,3)); 
  return 0;
}
