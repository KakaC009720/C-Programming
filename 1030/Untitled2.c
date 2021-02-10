#include <stdio.h>

int a(int x, int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n%2==0)
    {
        return a(x, n/2)*pow(x, n/2);
    }
    else
    {
        return x*a(x, n-1);
    }
}


int main(void)
{
    int x, n;

    scanf("%d %d", &x, &n);
    a(x, n);
    printf("%d\n", a(x, n));


    return 0;
}
