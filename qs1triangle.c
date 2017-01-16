#include <stdio.h>
int main(void)
{
    int i,n;
    for(i=1;i<=6;i++)
    {
        for(n=1;n<=i;n++)
        {
            if((n==1)||(n==i))
            {
                printf("1\t");
            }
            else
            {
                printf("%d\t",i);
            }
        }
        printf("\n");
    }
    return 0;
}
