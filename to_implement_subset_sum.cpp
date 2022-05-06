#include<stdio.h>
int main()
{
int n,i,sum=0,j;
printf("Enterthenumberofelements:");
int a[n];
scanf("%d",&n);
printf("Entertheelements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("Thesum ofyournumberis:%d",sum);
}
