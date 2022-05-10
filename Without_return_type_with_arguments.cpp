#include<stdio.h>
int main()
{
int add();
add();

}
void add(int a,int b,int c)
{
printf("Enterthefirstnumber:");
scanf("%d",&a);
printf("Enterthesecondnumber:");
scanf("%d",&b);
c=a+b;
printf("Thesum oftwonumbersis:%d",c);
}
