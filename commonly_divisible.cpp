//C program to display first 20 numbers which is commonly divisible by 3 and 5

#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<21;i++)
	{
		if(i%3==0 && i%5==0)
		{
			printf("\n%d",i);
		}
	}
}
