#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
 
  FILE *p;
  p=fopen("New Text Document.txt","r"); //content2.txt file name
  int i,a[100],b[100],pos;
  for(i=0;i<20;i++)
    fscanf(p,"%d,",&a[i]);  //reading all 20 numbers in first file
  printf("The number from the first file is:\n");
  for(i=0;i<20;i++)
    printf("%d ",a[i]); //printing all 20 numbers
  for(i=0;i<20;i++)
    b[i]=a[i]*a[i]; //squaring all 20 numbers
  FILE *f;
  f=fopen("New Text Document (2).txt","w");  //opening and creating another file
  for(i=0;i<20;i++) 
    fprintf(f,"%d  ",b[i]); //copying values from first file to second file
  printf("\nThe squared number from another file:\n"); 
  for(i=0;i<20;i++)
    printf("%d  ",b[i]);  //printing all squared numbers
  printf("\n");
    return 0;
}


