#include <stdio.h>

void find_closest_flight (int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
    int desired_time, hr, min, departure_time, arrival_time;
    int hr2, min2;
    int hr3, min3;

    scanf("%d:%d", &hr, &min);
    desired_time=hr*60+min;
    find_closest_flight (desired_time, &departure_time, &arrival_time);

    hr2=departure_time/60;
    min2=departure_time%60;
    hr3=arrival_time/60;
    min3=arrival_time%60;

    printf("Closest departure time is %d:%d, arriving at %d:%d\n", hr2, min2, hr3, min3);
    return 0;
}

void find_closest_flight (int desired_time, int *departure_time, int *arrival_time)
{
    if(desired_time<548)
    {
        *departure_time=480;
        *arrival_time=616;
    }
    else if(desired_time<648)
    {
        *departure_time=583;
        *arrival_time=712;
    }
    else if(desired_time<745)
    {
        *departure_time=679;
        *arrival_time=811;
    }
    else if(desired_time<834)
    {
        *departure_time=767;
        *arrival_time=900;
    }
    else if(desired_time<904)
    {
        *departure_time=840;
        *arrival_time=968;
    }
    else if(desired_time<1010)
    {
        *departure_time=945;
        *arrival_time=1075;
    }
    else if(desired_time<1210)
    {
        *departure_time=1140;
        *arrival_time=1280;
    }
    else
    {
        *departure_time=1305;
        *arrival_time=1438;
    }
}
