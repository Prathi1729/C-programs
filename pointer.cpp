#include<stdio.h>
int main()
{
	int value1=5,value2=20;
	int *p1,*p2;
	p1=&value1;
	p2=&value2;
	printf("%d\n%d",&p1,&p2);
	printf("\n%d\n%d",p1,p2);
	printf("\n%d\n%d",value1,value2);
	printf("\n%d\n%d",&value1,&value2);
	*p1=10;
	printf("\n");
	printf("\n%d",p1);
	printf("\n%d",*p1);
	printf("\n%d",&p1);
	*p2=*p1;
	printf("\n");
	printf("\n%d",p1);
	printf("\n%d",*p1);
	printf("\n%d",&p1);
	
	printf("\n%d",p2);
	printf("\n%d",*p2);
	printf("\n%d",&p2);
	printf("\n\nvalue1=%d\nvalue2=%d\n",value1,value2);
	p1=p2;
	printf("\n");
	printf("\n%d",p1);
	printf("\n%d",*p1);
	printf("\n%d",&p1);
	
	printf("\n%d",p2);
	printf("\n%d",*p2);
	printf("\n%d",&p2);
	*p1=20;
	printf("\n\nvalue1=%d\nvalue2=%d\n",value1,value2);
}
