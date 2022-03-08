#include<stdio.h>
struct student
{
  char d[100];
  char reg[100];
  int sub1,sub2,sub3,sub4,sub5;
  float per;
};
void fun(struct student *obj)
{
  int i;
  float sum;
  for(i=0;i<25;i++)
  {
    printf("Enter the student %d name:",(i+1));
    scanf("%s",obj[i].d);
    printf("Enter the regno of student %d :",(i+1));
    scanf("%s",obj[i].reg);
    printf("Enter the marks for student %d:\n",(i+1));
    printf("Subject1:");
    scanf("%d",&obj[i].sub1);
    printf("Subject2:");
    scanf("%d",&obj[i].sub2);
    printf("Subject3:");
    scanf("%d",&obj[i].sub3);
    printf("Subject4:");
    scanf("%d",&obj[i].sub4);
    printf("Subject5:");
    scanf("%d",&obj[i].sub5);
    printf("Calculating percentage:\n");
    printf("Percentage for Student 1 is:");
    sum=obj[i].sub1+obj[i].sub2+obj[i].sub3+obj[i].sub4+obj[i].sub5;
    obj[i].per=(sum/500)*100;
    printf("%.3f\n",obj[i].per);
  }
  printf("\n\nDISPLAYING ALL ENTRIES:\n\n");
  for(i=0;i<25;i++)
  {
    printf("student %d name: %s\n",(i+1),obj[i].d);
    printf("reg.no of student %d\t:%s\n",(i+1),obj[i].reg);
    printf("marks for student %d:\n",(i+1));

    printf("subject 1: %d\n",obj[i].sub1);
    printf("subject 2: %d\n",obj[i].sub2);
    printf("subject 3: %d\n",obj[i].sub3);
    printf("subject 4: %d\n",obj[i].sub4);
    printf("subject 5: %d\n",obj[i].sub5);
    printf("percentage of student %d:\t%.3f\n",(i+1),obj[i].per);
    printf("\n\n");

  }
}
int main()
{
  int n,val;
 
  printf("Enter the number of objects to create.(25):");
  val=scanf("%d",&n);
  if(val!=0)
  {
    struct student obj[n];
    fun(obj);
  }
  else
    printf("Enter only numbers for object creations:");
  return 0;
}

