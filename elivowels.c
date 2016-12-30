#include<stdio.h>
#include<string.h>
void main()
{
        char s1[50],s2[50];
        int i,j,k=0;
        printf("\n Enter a string");
        gets(s1);
        j=strlen(s1);
        for(i=0;i<j;i++)
        {
                if(((s1[i]>=65&&s1[i]<=90)||(s1[i]>=97&&s1[i]<=122))&&(s1[i]!=65||s1[i]!=69||s[i]!=73||s1[i]!=79||s1[i]!=85||s1[i]!=97||s1[i]!=101||s1[i]!=105||s1[i]!=111||s1[i]!=117))
                {
                        s2[k]=s1[i];
                        k++;
                }
        }
        for(i=0;i<j;i++)
        {
                printf("%s",s2);
        }
}
        
                        
