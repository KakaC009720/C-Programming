#include <stdio.h>

int main(void)
{
    int i, j,  r, c, a[5][5];
    int row1=0, row2=0, row3=0, row4=0, row5=0;
    int col1=0, col2=0, col3=0, col4=0, col5=0;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(r=0;r<5;r++){
        row1 = row1 + a[0][r];
        row2 = row2 + a[1][r];
        row3 = row3 + a[2][r];
        row4 = row4 + a[3][r];
        row5 = row5 + a[4][r];
    }

    for(c=0;c<5;c++){
        col1 = col1 + a[c][0];
        col2 = col2 + a[c][1];
        col3 = col3 + a[c][2];
        col4 = col4 + a[c][3];
        col5 = col5 + a[c][4];
    }

    printf("Row totals: %d %d %d %d %d\n", row1, row2, row3, row4, row5);

    printf("Column totals: %d %d %d %d %d\n", col1, col2, col3, col4, col5);

    return 0;
}
