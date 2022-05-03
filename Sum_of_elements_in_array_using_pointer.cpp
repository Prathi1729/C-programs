#include<stdio.h>
int main()
{
int n,i,*p,sum=0;
printf("Enterthenumberofelementstobestored:");
scanf("%d",&n);
int a[n];
printf("Entertheelementsofanarray:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
p=a;
for(i=0;i<n;i++)
{
sum=sum+*p;
p++;
}
printf("Thesum ofyourelementsare:%d",sum);
}
