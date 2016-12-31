#include<stdio.h>
void main()
{
	int a[10],i,n,m,c=0;
	printf("Enter the size of the array");
	scanf("%d",&n);
	printf("Enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element whose occurance has to be known");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		if(m==a[i])
		{
			c++;
		}
	}
	printf("The no of occurance is %d",c);
}
	

