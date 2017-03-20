#include <stdio.h>

int main(void)
{
    int n,i,a[10];
	printf("Enter no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	int high=0,sechigh=0;
	for(i=0;i<n;i++)
	{
	    if(high<i)
	    {
	        sechigh=high;
	        high=i;
	    }
	    else if(sechigh<i)
	    {
	        sechigh=i;
	    }
	}
	printf("The second highest is %d",sechigh);
	return 0;
}

