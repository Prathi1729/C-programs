#include<stdio.h>
int main()
{
int i,j,n,m;
printf("Enterthenumberofrows:");
scanf("%d",&n);
printf("Enterthenumberofcolumns:");
scanf("%d",&m);
int a[n][m],b[n][m],c[n][m];
printf("Enterthematrixa:\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enterthematrixb:\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("Thesum ofyourmatrixis:\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
