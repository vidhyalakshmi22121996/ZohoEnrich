#include<stdio.h>
#include<string.h>

void palindrome(char a[]);

void main()
{
	char a[20];
	printf("Enter a string");
	scanf("%s",a);
	palindrome(a);
}	

void palindrome(char a[])	
{
	int i,l,j,x,odd=0;
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		x=1;
		if(a[i] == '\0')
		{
			continue;
		}
		for(j=i+1;j<l;j++)
		{
			if(a[i]==a[j])
			{
				x++;
				a[j]='\0';
			}
		}
		if((x%2)!=0)
		{
			odd++;
		}
	}
	if(odd>=2)
	{
		printf("\n FALSE");		
	}
	else
	{
		printf("\n TRUE");
	}
}
