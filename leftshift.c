#include<stdio.h>
void main()
{
    int n,m,rem,i,l;
    printf("\n Enter any no");
    scanf("%d",&n);
    printf("Enter the no of leftshift");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        rem=n%10;
        m=n/10;
        if(rem!=0)
        {
            n=(10000*rem)+m;
        }
        else
        {
            n=m;
        }
    }
    printf("%d",n);
}
