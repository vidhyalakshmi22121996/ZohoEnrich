#include<stdio.h>
int main(void)
{
    int a[10][10];
    int i,j,n;
    printf("Enter any number");
    scanf("%d",&n);
    j=0;
    for(i=0;i<n;i++)
    {
        a[i][0]=1;
        a[i][j]=1;
        j++;
    }
    for(i=2;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(i=0;i<n;i++)
    { 
        for(j=0;j<=i;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
 
