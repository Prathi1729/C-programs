#include "stdio.h"
int main()
{
  printf("PRATHIBAN V 19MID0010 \n");
  printf("Line number of program is :%d\n",__LINE__);
  printf("Name of program is :%s\n",__FILE__);
  printf("Date of program is :%s\n",__DATE__);
  printf("TIME of program is :%s\n",__TIME__);
  printf("Compiler Standard no :%d\n",__STDC__);
  printf("Compiler version:%ld\n",__STDC_VERSION__);
  printf("Compiler Hosted:%d\n",__STDC_HOSTED__);
  return 0;
}


