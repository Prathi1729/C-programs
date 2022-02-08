//C program to swap two number without using third parameter

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two Numbers a and b: ");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("\nThe Numbers a and b before Swapping: %d %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nThe Numbers a and b after Swapping: %d %d",a,b);
 } 
