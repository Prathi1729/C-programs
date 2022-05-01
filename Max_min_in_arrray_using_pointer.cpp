#include<stdio.h>
int main()
{
int n,*min,*max,i,p=1;
printf("Enterthenumberofelementstobestored:");
scanf("%d",&n);
int a[n];
printf("Entertheelementsinanarray:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a;
*min=*a;
max=a;
*max=*a;
for(i=1;i<n;i++)
{
if(*(a+i)<*min)
{

*min=*(a+i);
p=i+1;
}
}
printf("Theminimum elementis:%d\n",*min);
for(i=1;i<n;i++)
{
if(*(a+i)>*max)
{
*max=*(a+i);
p=i+1;
}
}
printf("Themaximum elementis:%d\n",*max);
}
