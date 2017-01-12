#include <stdio.h>
int main(void) 
{
    int i,n,count=1,op=1;
    printf("Enter any no");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\t%d",op);
        count++;
	op=op+count;
    }
    return 0;
}
