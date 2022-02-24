#include <stdio.h> 

#include<stdlib.h> 

#include<string.h> 

int main() 

{ 

 char *a,t; 

 int i,j,l; 

 

 a=(char*)malloc(100*sizeof(char)); 

 printf("Enter name: "); 

 scanf("%s",a); 

 l=strlen(a); 

 for(i=0;i<l-1;i++) 

 { 

 for(j=1;j<l-i;j++) 

 { 

 if(a[j-1] > a[j]) 

 { 

 t=a[j-1]; 

 a[j-1]=a[j]; 

 a[j]=t; 

 } 

 } 

 } 

 printf("Ascending order of name is: %s\n",a); 

 return 0; 

} 

