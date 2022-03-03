#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int myCompare(void* a,void* b)
{
 return strcmp(*(char**)a, *(char**)b);
}
void sort(char *arr[], int n)
{
 qsort(arr, n, sizeof(char*),myCompare);
}
int main()
{
 
 char* arr[5];
 int i,val; 
 printf("\nENTER NAMES:\n");
 for(i=0;i<5;i++)
 arr[i]=(char *)malloc(5*sizeof(char));

 for(i=0;i<5;i++)
 fgets(arr[i],sizeof(arr[i]),stdin); 

 int n=sizeof(arr)/sizeof(arr[0]);
 sort(arr,n);
 printf("\nSorted array is:\n");
 for (i=0;i<n;i++)
 printf("%s",arr[i]);
 return 0;
}

