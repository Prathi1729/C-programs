#include "stdio.h"
#define mkstr(s)#s
#define concat(a,b) a##b
int main()
{
  
  printf("# make argument as string:\n");
  printf(mkstr(Helloworldprogram));
  printf("\n");
  printf("## concats:\n");
  printf("%d",concat(1, 2));
  printf("\n");
  return 0;
}

