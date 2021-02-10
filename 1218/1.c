#include <stdio.h>

int main(void)
{
    enum months{January=1, February, March, April, May, June, July, August, September, October, November, December};
    enum months month;
    const char *monthName[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    for(month=January; month<=December; month++)
    {
        printf("%d\t", month);
        puts(monthName[month-1]);
    }
}
