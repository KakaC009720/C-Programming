#include <stdio.h>

int main(void)
{
    int a, b, value;
    char ch;

    scanf("%d%c%d", &a, &ch, &b);

    switch(ch){
    case '+':
        value = a + b;
        printf("%d\n", value);
        break;
    case '-':
        value = a - b;
        printf("%d\n", value);
        break;
    case '*':
        value = a * b;
        printf("%d\n", value);
        break;
    case '/':
        value = a / b;
        printf("%d\n", value);
        break;
    case '%':
        value = a % b;
        printf("%d\n", value);
        break;
    default:
        printf("Error\n");
    }

    return 0;
}
