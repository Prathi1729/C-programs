#include<stdio.h>
int main()
{
  
  FILE *p;
  p=fopen("content.txt","w");
  char a[100][100];
  int i;
  printf("Enter 5 names:\n");
  for(i=0;i<5;i++)
  {
    scanf("%s",a[i]);
    fputs("\n",p);
    fputs(a[i],p);
  }
  printf("displaying name:\n");
  for(i=0;i<5;i++)
    fprintf(stdout,"%s \n",a[i]);
  return 0;
}


