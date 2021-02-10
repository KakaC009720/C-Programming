#include <stdio.h>

void funcadd(a, b, c);
void display(c);

int main(void)
{
    int a[3][4], b[3][4], c[3][4];
    int i, j;


    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;

}
