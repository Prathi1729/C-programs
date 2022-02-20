#include<stdio.h>
int main()
{
	int a,n;
	printf("Enter the length of number: ");
	scanf("%d",&a);
	int n[9];
	printf("Enter the number on by one: ");
	for(int i=0;i<a;i++)
	{
		scanf("%d",n[i]);
	}
	for(int j=0;j<a;j++)
	{
		if(j%2!=0 && j>0)
		{
			if(n[j]>n[j-1] && n[j]>n[j+1])
			{
				
			}
			else
			{
				break;
			}
		}
		
	}
	
}
