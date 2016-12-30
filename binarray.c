#include<stdio.h>
void main()
{
        int a[5][5],i,j,m,n,k;
        printf("\n Enter the value of m,n and k");
        scanf("%d %d %d",&m,&n,&k);
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        if((i+j)==k)
                        {
                                a[i][j]=1;
                        }
                        else
                        {
                                a[i][j]=0;
                        }
                }
        }
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d\t",a[i][j]);
                }
                printf("\n");
        }
}
