#include <stdio.h>

float ans=0, num1, num2;
char operation;
float calculate(float num1, float num2, char operation);
float add(float num1, float num2);
float substrate(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);

int main(void)
{
    scanf("%f%c%f", &num1, &operation, &num2);
    calculate(num1, num2, operation);
    printf("%.1f", ans);

    return 0;
}

float calculate(float num1, float num2, char operation)
{
    switch(operation)
    {
        case '+':   add(num1, num2);
            break;
        case '-':   substrate(num1, num2);
            break;
        case '*':   multiply(num1, num2);
            break;
        case '/':   divide(num1, num2);
            break;
    }
}

float add(float num1, float num2)
{
    ans=num1+num2;
    return ans;
}

float substrate(float num1, float num2)
{
    ans=num1-num2;
    return ans;
}

float multiply(float num1, float num2)
{
    ans=num1*num2;
    return ans;
}

float divide(float num1, float num2)
{
    ans=num1/num2;
    return ans;
}
