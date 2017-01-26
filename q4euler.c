#include <stdio.h>
int main()
{
  int m[10][10]={0},i,j,n;
  printf("\n Enter any number\n");
  scanf("%d",&n);
  for(i=2;i<(n+1);i++)
  {
    for(j=1;j<i;j++)
    {
      if(j==1||j==i-1)
      {
        m[i][j]=1;
      }
      else
      {
        m[i][j]=((i-j)*m[i-1][j-1])+((j)*m[i-1][j]);
      }
      printf("%d\t",m[i][j]);
    }
    printf("\n");
  }
  return 0;
}
