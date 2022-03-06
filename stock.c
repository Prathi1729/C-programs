#include <stdio.h>
#include <math.h>

int main()
{
	int a,i;
	printf("Enter the Size: ");
	scanf("%d",a);
	float n[a];
	printf("Enter the stock prices : ");
	for(i=0;i<a;i++)
	{
		scanf("%d",n[i]);
	}
	void (*p)(float,int)=average;
	(*p)(n,a);
	
}

void average(float avg[],int x)
{
	int j;
	printf("Average stock prices : ");
    for(j=0;j<x;j++)
    {
        printf("%.1f ",(float)(avg[j]+avg[j+1])/2);
    }
}
