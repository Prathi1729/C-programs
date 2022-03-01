#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
   int num,i,j,square;
   char a;
   FILE *fptr,*pptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("first.txt","w");
   pptr=fopen("second.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter num: ");
   for( i=0;i<20;i++)
   {
   
   scanf("%d%c",&num,&a);


   fprintf(fptr,"%d\n",num);

 	fscanf(fptr,"%d", &num);
 


	
    printf("\nvalue of num:%d\n", num);
    square=num*num;
    printf("\nsquare of num:%d\n",square);
    	fprintf(pptr,"%d\n",square);
    
}


	
 
 


				
   fclose(fptr);

   return 0;
}
