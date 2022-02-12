#include<stdio.h>
# define decimal 18
# define disp(b)\
         printf("%d",b)
#ifndef decimal
#error Decimal value is not included
#endif
int main()
{
    int i=0,j,n,a[30];
    #ifdef decimal
    printf("\nValue defined");
    #endif
    printf("\nDecimal value is: %d",decimal);
    n=decimal;
    while(n>0)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }
    printf("\nBinary value of %d is: ",decimal);
    for(j=i-1;j>=0;j--)
        disp(a[j]);
    return 0;
}
