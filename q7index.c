#include <stdio.h>
int main(void)
{
    int n,a[n],i,j=0,m,c[10];
    printf("Enter the no of elements");
    scanf("%d",&n);
    printf("Enter the array of elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(m==a[i])
        {
            c[j]=i;
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%d",c[i]);
    }
	return 0;
}

