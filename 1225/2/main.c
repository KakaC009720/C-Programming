#include <stdio.h>
#include <stdlib.h>

#include "calculate.h"


int main()
{

    float  num1, num2;
    char ch;
    scanf("%f%c%f", &num1, &ch, &num2);
    switch(ch)
    {
    case'+':
        add (num1, num2);
        break;
    case'-':
        substrate (num1, num2);
        break;
    case'*':
        multiply ( num1, num2);
        break;
    case'/':
        divide( num1, num2);
        break;
    default:
        printf("wtf");
        break;
    }

    return 0;
}
