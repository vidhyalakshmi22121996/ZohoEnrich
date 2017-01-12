#include <stdio.h>
#include <unistd.h>
int main(void) 
{   
    int i;
    char wish[]={'H','A','P','P','Y',' ','P','O','N','G','A','L'};
    for(i=0;wish[i]!='\0';i++)
    {
        putchar(wish[i]);
    }
    fflush(stdout);
    usleep(10000000);
	  return 0;
}
