#include <stdio.h>
int main(void)
{
    int n,i,j,f=0;
    printf("Enter any number");
    scanf("%d",&n);
    for(i=n+1;i>0;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("The next prime number is %d",i);
            break;
        }
        f=0;
    }
    return 0;
}
