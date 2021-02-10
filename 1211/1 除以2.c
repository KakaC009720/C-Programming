#include <stdio.h>

int main(void)
{
    int x, a[100];
    int i, k;
    scanf("%d", &x);
    for(i=0;i<32;i++)
    {
        k=x%2;
        x/=2;
        a[i]=k;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d", a[i]);
        if(i==8||i==16||i==24)
            printf(" ");
    }



    return 0;
}
