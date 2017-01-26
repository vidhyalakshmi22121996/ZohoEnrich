#include <stdio.h>
#include<math.h>
int main(void) 
{
	int n,m,i,j,r,rem;
	printf("\n Enter no of elements");
	scanf("%d",&n);
	m=pow(2,n);
	int s[n],a[m][n];
	printf("\n Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<m;i++)
	{
		r=i+1;
		for(j=0;j<n;j++)
		{
			rem=r%2;
			a[i][j]=rem;
			r=r/2;
			if(a[i][j]==1)
			{
				printf("%d,",s[j]);
			}
		}
		printf("\n");
	}
	return 0;
}
