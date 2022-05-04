#include<stdio.h>
int main()
{
int n,i,even=0,odd=0;
printf("Enterthenumberofelementstobeentered:");
scanf("%d",&n);
int a[n];
printf("Entertheelementsofanarray:\n");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
if(i%2==0)
even=even+a[i];
else
odd=odd+a[i];
}
printf("Thesum oftheoddpositionelementsare:%d\n",odd);
printf("Thesum oftheevenpositionelementsare:%d\n",even);
}
