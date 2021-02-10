#include <stdio.h>

int main(void)
{
    int num1, num2;
    int a, b, r;

    scanf("%d%d", &num1, &num2);
    a = num1;
    b = num2;

    while(r!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    printf("%d", a);

    return 0;

}
