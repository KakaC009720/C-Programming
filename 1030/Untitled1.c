#include <stdio.h>

float cal(float a, float b, float c, char ch)
{
    switch(ch)
    {
    case'+':
        c = a+b;
        printf("%.1f", c);
        return c;
        break;
    case'-':
        c = a-b;
        printf("%.1f", c);
        return c;
        break;
    case'*':
        c = a*b;
        printf("%.1f", c);
        return c;
        break;
    case'/':
        c = a/b;
        printf("%.1f", c);
        return c;
        break;

    }
}

int main(void)
{
    float a, b, c;
    char ch;

    scanf("%f%c%f", &a, &ch, &b);
    cal(a, b, c, ch);

    return 0;
}
