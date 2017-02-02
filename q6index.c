#include <stdio.h>
int main(void)
{
    int n,a[n],i,m,c;
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
            c=i;
        }
    }
    printf("%d",c);
	return 0;
}

