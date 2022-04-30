#include<stdio.h>
int main()
{
int i,n,max,min;
printf("Enterthenumberofelementstobestored:");
scanf("%d",&n);
int a[n];
printf("Entertheelementsofanarray:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];

}
if(a[i]<min)
{
min=a[i];
}
}
printf("Themaximum elementis:%d\n",max);
printf("Theminimum elementis:%d\n",min);
}
