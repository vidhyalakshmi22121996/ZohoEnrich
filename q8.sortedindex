#include <stdio.h>
int main(void) 
{
   int i,j,n,a[n],temp,m,b[10];
    printf("Enter the no of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            while(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("The sorted arrray is ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("Enter the element to be searched");
    scanf("%d",&m);
    j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%d",a[j]);
    }
	// your code goes here
	return 0;
}
