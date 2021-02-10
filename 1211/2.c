#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch[100]={0}, ch1;
    int a, c, d, e;
    float b;
    scanf("%s", ch);
    fp=fopen(ch, "r");
    printf("Item\t\tprice\t\tDate\n");

    //fscanf(fp,"%d,%f,%d/%d/%d", &a, &b, &c, &d, &e);//補第1個數跑不出來
    //printf("%d\t\t$%.2f\t\t%d/%d/%d\n", a, b, c, d, e);


    while((ch1=getc(fp))!=EOF)
    {
        fscanf(fp,"%d,%f,%d/%d/%d\n", &a, &b, &c, &d, &e);
        printf("%c%d\t\t$%.2f\t\t%d/%d/%d\n",ch1, a, b, c, d, e);
    }
    fclose(fp);
}
