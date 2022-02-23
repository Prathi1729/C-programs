//C program to display memory size of the variable

#include<stdio.h>
int main()
{
	int a;
	float b;
	char c;
	long d;
	double e;
	printf("Memory size of variable a is %d",sizeof(a));
	printf("\nMemory size of variable b is %d",sizeof(b));
	printf("\nMemory size of variable c is %d",sizeof(c));
	printf("\nMemory size of variable d is %d",sizeof(d));
	printf("\nMemory size of variable e is %d",sizeof(e));
}
