#include<stdio.h>
int main()
{
int n,i,*p,even=0,odd=0;
printf("Enterthenumberofelementstobestored:");
scanf("%d",&n);
int a[n];
printf("Entertheelementsinanarray:\n");
p=a;
for(i=1;i<=n;i++)
{
scanf("%d",&*p);
if(i%2==0)
even=even+*p;
else
odd=odd+*p;
p++;
}
printf("Thesum ofevenpositionare:%d\n",even);
printf("Thesum ofoddpositionare:%d\n",odd);

}
