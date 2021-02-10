#include <stdio.h>

int main(void)
{
    char a[100], *p=a;
    int i;

    for(i=0;i<100;i++)
    {
        *(p+i)=getchar();
        if(*(p+i)=='\n')
            break;
    }

    for(i=i-1;i>=0;i--)
    {
        printf("%c", *(p+i));
    }

    return 0;
}


