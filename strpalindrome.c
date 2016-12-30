#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50],s2[50];
    printf("\n Enter any string");
    scanf("%s",&s1);
    s2=strrev(s1);
    if(s1==s2)
    {
        printf("\n palindrome");
    }
    else
    {
        printf("\n Not a palindrome");
    }
}
