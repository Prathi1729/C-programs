#include <stdio.h>
#include <math.h>

int main()
{
	double dis,real,img,root1,root2,x,y,z;;
	printf("Enter the three numbers a,b,c: ");
	scanf("%lf %lf %lf",&x,&y,&z);
    dis=y*y-4*x*z;
 
 	if(dis<0)
	{
		printf("\nThe Discriminant is less than zero");
		printf("\nRoots are not real");
		real=-y/(2*x);
        img=sqrt(-dis)/(2*x);
        printf("\nRoot1= %.2lf+ %.2lfi ",real,img);
        printf("\nRoot2= %.2lf- %.2lfi ",real,img);
	} 
	
	else if(dis==0)
	{
		printf("\nThe Discriminant is equal to zero");
		printf("\nRoots are real and equal");
        root1=root2=-y/(2*x);
        printf("\nRoot1 =%.2lf;",root1);
        printf("\nRoot2 =%.2lf;",root1);
    }

	else
	{
		printf("\nThe Discriminant is greater than zero");
		printf("\nRoots are real and different");
		root1=(-y+sqrt(dis))/(2*x);
        root2=(-y-sqrt(dis))/(2*x);
        printf("\nRoot1 = %.2lf",root1);
        printf("\nRoot2 = %.2lf",root2);
	}
}
