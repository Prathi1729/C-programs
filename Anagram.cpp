#include <stdio.h> 

#include<stdbool.h> 

#include<stdlib.h> 

bool areAnagram(char* str1, char* str2) 

{ 

 int count1[26] = { 0 }; 

 int count2[26] = { 0 }; 

 int i; 

 for (i = 0; str1[i] && str2[i]; i++) 

 { 

 count1[str1[i]]++; 

 count2[str2[i]]++; 

 } 

 if (str1[i] || str2[i]) 

 return false; 

 for (i = 0; i < 26; i++) 

 if (count1[i] != count2[i]) 

 return false; 

 return true; 

} 

int main() 

{ 

 

 char *a[100],*b[100]; 

 int i,val; 

 for(i=0;i<5;i++) 

 { 

 a[i]=(char *)malloc(5*sizeof(char)); 

 b[i]=(char *)malloc(5*sizeof(char)); 

 } 

 for(i=0;i<1;i++) 

 { 

 printf("Enter character a:\n"); 

 val=scanf("%s",a); 

 } 

 for(i=0;i<1;i++) 

 { 

 printf("Enter character b:\n"); 

 scanf("%s",b); 

 } 

 if (areAnagram(a, b)) 


 printf("The two strings are anagram of each other"); 

 else 

 printf("The two strings are not anagram of each other"); 

 return 0; 

} 

 
