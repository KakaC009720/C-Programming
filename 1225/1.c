#include <stdio.h>

#define PI 3.1415926
#define area(radius) radius*radius*PI

int main(void)
{
    int radius;
    float area;

    for(radius=1; radius<=10; radius++)
    {

        printf("%d\t%.2f\n", radius, area(radius));
    }

    return 0;
}
