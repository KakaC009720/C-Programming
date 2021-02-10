#include <stdio.h>

int even(int x, int n);
int odd(int x, int n);
int ans=0;

int main(void)
{
    int x, n;
    scanf("%d %d", &x, &n);

    if(n%2 == 0)
    {
        even(x, n);
    }
    else
    {
        odd(x, n);
    }

    printf("%d", ans);

    return 0;
}

int even(int x, int n)
{
    int i, g=1;
    for(i=0;i<n/2;i++)
    {
        g = g*x;
    }
    ans = g*g;
    return ans;
}

int odd(int x, int n)
{
    n=n-1;
    even(x, n);
    ans = x*ans;
}
