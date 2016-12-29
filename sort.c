#include<stdio.h>
void main()
{
    int n, i, a[10],j,k;
    printf("enter any number");
    scanf("%d",&n);
    for(i=0;n!=0;i++)
    {
    a[i]=n%10;
    n=n/10;
    }
    for(j=0;j<i;j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(a[j]>a[k])
            {
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
            }
        }
    }
    n=0;
    for(j=0;j<i;j++)
    {
        n=(n*10)+a[j];
    }
    printf("\n%d",n);
}
