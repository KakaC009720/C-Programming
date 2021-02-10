#include <stdio.h>

int main(void)
{
    int a, i,j;
    scanf("%d", &a);

    if(a%2==0)
    {

        for(i=1;i<=(a/2);i++)
        {
            for(j=0;j<i;j++)
              printf("*");
            printf("\n");
        }
        for(i=a/2;i>=1;i--)
        {
            for(j=i;j>0;j--)
              printf("*");
            printf("\n");
        }
    }
    else
    {
        for(i=1;i<=(a/2)+1;i++)
        {
            for(j=0;j<i;j++)
              printf("*");
            printf("\n");
        }
        for(i=a/2;i>=1;i--)
        {
            for(j=i;j>0;j--)
              printf("*");
            printf("\n");
        }
    }

}
