#include<stdio.h>
#include<string.h>
struct A
{
  char a[100];
  char b[100];
  int num;
  float flo;
};
int atoi(const char *str);
int main()
{
  
  int n,val;
  printf("Enter the number of objects:");
  val=scanf("%d",&n);
  if(val!=0)
  {
    struct A obj[n];
    int i,count=0,count1=0,length,length1;
    for(i=0;i<n;i++)
    {
      printf("Enter the first character array %d:",(i+1));
      scanf("%s",obj[i].a);
      printf("Enter the Second character array %d:",(i+1));
      scanf("%s",obj[i].b);
      printf("Enter the integer value:");
      scanf("%d",&obj[i].num);
      printf("Enter the float value:");
      scanf("%f",&obj[i].flo);
    }
    for(i=0;i<n;i++)
    {
      printf("\n");
      printf("%s\n",obj[i].a);
      printf("%s\n",obj[i].b);
      printf("%d\n",obj[i].num);
      printf("%f\n",obj[i].flo);
      printf("\n");
    }

    printf("\nFinding length of a both character arrays\n");
    for(i=0;i<n;i++)
    {
      while(obj[i].a[count]!='\0')
      {
        count++;
      }
      printf("The length of first %d character array is %d\n",(i+1),count);
      while(obj[i].b[count1]!='\0')
      {
        count1++;
      }
      printf("\nThe length of second %d character array is %d\n",(i+1),count1);
    }

    printf("\nReversing first character arrays\n");
    for(i=0;i<n;i++)
    {
      length=strlen(obj[i].a);
      for(int j=length;j>=0;j--)
        printf("%c\t",obj[i].a[j]);
      printf("\n");
    }
    printf("\nReversing second character arrays\n");
    for(i=0;i<n;i++)
    {
      length1=strlen(obj[i].b);
      for(int j=length1;j>=0;j--)
        printf("%c\t",obj[i].b[j]);
      printf("\n");
    }
    for(i=0;i<n;i++)
    {
      printf("\nconcat two char arrays:\t");  
      int len=0,j;
      while(obj[i].a[len]!='\0')
        ++len;
      for (j= 0;obj[i].b[j] != '\0'; ++j, ++len)
      {
        obj[i].a[len]=obj[i].b[j];
      }
      obj[i].a[len]='\0';
      puts(obj[i].a);
    }
    for(i=0;i<n;i++)
    {
      printf("\ncompare two char:\t");  
      int result=strcmp(obj[i].a,obj[i].b);
      printf("%d",result);
      if(result<0)
        printf("\n They are not equal");
      else 
        printf("\nequal");
      printf("\nSubstring strst:\t");  
      char* res=strstr(obj[i].a,obj[i].b);
      printf("%s",res);
      printf("\natoi for first char array:\n");
      strcpy(obj[i].a,"12345");
      int val=atoi(obj[i].a);
      printf("int val=%d",val);
      printf("\natoi for second char array:\n");
      strcpy(obj[i].b,"givingstring");
      int val1=atoi(obj[i].b);
      printf("int val=%d\n",val1);
    }
  }
  else
    printf("Enter only integer value for object creation\n");
  return 0;
}

