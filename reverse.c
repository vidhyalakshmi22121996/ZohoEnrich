# ZohoEnrich
Assignments
#include<stdio.h>
int main(void)
{
int n,r,rev=0,mul=1;
scanf("%d",&n);
if(n>0)
{
do
{
r=n%10;
rev=(rev*mul)+r;
mul*=10;
n/=10;
}
while(n>0);
printf("\nreverse:%d",rev);
}
else
printf("\nwrong input");
return 0;
}
