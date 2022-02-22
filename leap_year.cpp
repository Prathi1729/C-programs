//C program to check whether the year is Leap year

#include<stdio.h>
int main()
{
	int a;
	printf("Enter the year: ");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("\n%d is Leap year",a);
	}
	else
	{
		printf("\n%d is not Leap year",a);
	}
}
