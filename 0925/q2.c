#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    switch(c){
     case 1: printf("%d\n", a+b);
     break;
     case 2: printf("%d\n", a-b);
     break;
     case 3: printf("%d\n", a*b);
     break;
     case 4: printf("%d\n", a/b);
     break;
     default: printf("Error\n");
     break;
    }

    return 0;
}
