#include<stdio.h>
void swap(int*a,int*b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int main()
{
int x,y;
printf("Enterthefirstnumber:");
scanf("%d",&x);
printf("Enterthesecondnumber:");
scanf("%d",&y);
printf("Beforeswappingthevaluesare%d,%d",x,y);
printf("\nCallingswap");
swap(&x,&y);
printf("\nAfterswappingthevaluesare%d,%d",x,y);
}
