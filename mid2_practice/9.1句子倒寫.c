#include <stdio.h>

int main(void)
{
    char ch, a[100]={0};
    int i;
    while((ch=getchar())!='\n')
    {
        a[i]=ch;
        i++;
    }
    while(i>=0)
    {
        printf("%c", a[i]);
        i--;
    }
    return 0;
}
