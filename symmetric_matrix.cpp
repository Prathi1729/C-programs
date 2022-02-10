//C program to check whether the matrix is matrix

#include<stdio.h>
int main()
{
	int a[3][3];
	int b[3][3];
	int i,j;
	int symmetric=1;
	printf("Enter the Matrix values: ");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	
	for(i=0;i<3 && symmetric;i++)
	{
		for(j=0;j<3;j++)
		{
			if(b[i][j]!=a[i][j])
			{
				symmetric=0;
				break;
		    }
		}
	}
	
	if(symmetric==1)
	{
		printf("\nThe Matrix is Symmetric Matrix");
	}
	else
	{
		printf("\nThe Matrix is not Symmetric Matrix");
	}
}
