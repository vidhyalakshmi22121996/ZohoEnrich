#include <stdio.h>
int main()
{
    int i,j,k,m,n;
    printf("Enter any number\n");
    scanf("%d",&n);
    m=n;
    for (i=1;i<=n;i++)
    {
        for(j=1;j<m;j++,m--)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            if(k%2!=0)
            {
                printf("*");
            }
            else if(k%2==0)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
