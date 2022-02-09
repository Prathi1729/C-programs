
#include<stdio.h> 

#include<stdlib.h> 

#include<math.h> 

int r=3,c=3; 

int main() 

{ 


 float *ptr[r],sum=0.0; 

 int i,j,val; 

 for(i=0;i<r;i++) 

 ptr[i]=(float *)malloc(c*sizeof(float)); 

 for(i=0;i<r;i++) 

 { 

 for(j=0;j<c;j++) 

 { 

 val=scanf("%f",&ptr[i][j]); 

 } 

 } 

 if(val==0) 

 printf("Enter only the floating numbers\n"); 

 else{ 

 printf("Entered Numbers are:\n"); 

 for(i=0;i<r;i++) 


 { 

 printf("\n"); 

 for(j=0;j<c;j++) 

 { 

 printf("%.3f\t\t",ptr[i][j]); 

 } 

 printf("\n"); 

 } 

 printf("\nThe Numbers divisible by 3,5 and 7 are:\n"); 

 for(i=0;i<r;i++) 

 { 

 for(j=0;j<c;j++) 

 { 

 float res1=fmod(ptr[i][j],3); 

 float res2=fmod(ptr[i][j],5); 

 float res3=fmod(ptr[i][j],7); 

 if(res1==0.0 && res2==0.0 && res3==0.0) 

 { 

 printf("%.3f\t\t",ptr[i][j]); 

 printf("\n"); 

 sum=sum+ptr[i][j]; 

 } 

 } 

 } 

 printf("\nThe Sum of an array is:\n"); 

 printf("%.3f",sum); 


 } 

 return 0; 

} 
