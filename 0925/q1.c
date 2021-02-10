#include <stdio.h>

int main(void)
{
    int a, b, hr;
    scanf("%d:%d", &a, &b);
    if (a<1)
        printf("%.2d:%.2d midnight", a+12, b);
    else if(a<12)
        printf("%.2d:%.2d AM", a, b);
    else if (a==12)
        printf("%.2d:%.2d noon", a, b);
    else if(a<24)
        printf("%.2d:%.2d PM\n", a-12, b);
    else if (a==24)
        printf("%.2d:%.2d midnight", a-12, b);
    return 0;
}
