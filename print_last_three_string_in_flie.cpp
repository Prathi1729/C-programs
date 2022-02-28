#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *p;
    char ch[100][100],s[100];
    p=fopen("cntt.txt","w+");
    if(p==NULL)
    {
      perror("");
      exit(EXIT_FAILURE);
    }
    else
    {
      int i,arr[100],sum=0,no; 
    
      printf("Enter the number of Strings:");
      scanf("%d",&no);
      printf("Enter the %d Strings\n",no);
      for(i=0;i<no;i++)
      {
          scanf("%s",ch[i]);
          arr[i]=strlen(ch[i]);   //storing length of each string
          fputs("\n",p);
          fputs(ch[i],p);
      }
      int skip=no-3;//to skip the requiured number of strings
      for(i=0;i<skip;i++)
          sum=sum+arr[i];  //totalling length of first 2 names
      printf("String total Length is :%d\n",sum);
      int enter=sum+skip;
      printf("You have to Enter %d to get last 3 names in file",enter);
      int n;
      scanf("%d",&n);
      fseek(p,n,0);
      
      while(fscanf(p,"%s",s)!=EOF)
          printf("%s\n",s); 
      exit(EXIT_SUCCESS);
    }
    return 0;
}

