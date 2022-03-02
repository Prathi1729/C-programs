//C program to find sum of squares of Digits using Recrusive

#include<stdio.h>
#include<math.h>
using namespace std;
int recrusive(int);
int main()
{
	int a,b;
	printf("Enter the Number: ");
	scanf("%d",&a);
	b=recrusive(a);
	printf("\nSum of squares of Digits is %d",b);
}

int recrusive(int num)
{
	if(num==0)
	return 0;
	else
	return ((num%10)*(num%10)+(recrusive(num/10)));
}
