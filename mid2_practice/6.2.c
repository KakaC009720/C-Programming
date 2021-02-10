#include <stdio.h>

int main(void)
{
    int a[5][5];
    int i, j, row=0, col=0;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            row = row+a[i][j];
        }
        printf("%d ", row);
        row=0;
    }
    printf("\n");

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            col = col+a[j][i];
        }
        printf("%d ", col);
        col=0;
    }
    return 0;

}
