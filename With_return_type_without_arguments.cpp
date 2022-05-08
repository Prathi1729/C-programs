#include<stdio.h>
int main()
{
int c;
int add();
add();
return(c);
}
int add()
{
int a,b,c;
printf("Enterthefirstnumber:");
scanf("%d",&a);
printf("Enterthesecondnumber:");
scanf("%d",&b);
c=a+b;
printf("Thesum oftwonumbersis:%d",c);
return(0);
}
