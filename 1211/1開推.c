#include <stdio.h>
#include <ctype.h>

int main(void)
{
    unsigned int a, i;
    scanf("%d", &a);

    for(i=0;i<32;i++)
    {
        printf("%d", a>>31);
        a = a <<1;
    }
}
