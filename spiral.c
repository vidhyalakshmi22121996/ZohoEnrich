#include <stdio.h>

int main(void)
{
    int n,x,y;
    int i=1;
    int in=1;
    printf("Enter the order of matrix \n");
    scanf("%d",&n);
    for(x=0;x<n;x++)
    {
        if(in==1)
        {
            for(y=0;y<n;y++)
            {
                printf("%d\t",i);
                i++;
            }
        }
        if(in==0)
        {
            for(y=0;y<n;y++)
            {
                printf("%d\t",i);
                i--;
            }
        }
        printf("\n");
        if((i-1)%n==0)
        {
            in=0;
            i=i-1;
            i=i+n;
        }
        else
        {
            i=i+n+1;
            in=1;
        }
    }
	return 0;
}

