/* flights.c
 *
 * Solution to Programming Project 2 (Chapter 11)
 *
 * From C PROGRAMMING: A MODERN APPROACH (Second Edition)
 *
 * Copyright (c) 2008 W. W. Norton & Company
 * All rights reserved.
 *
 * This program may be freely distributed for class use,
 * provided that this copyright notice is retained.
 */

#include <stdio.h>

#define HOURS_PER_HALF_DAY 12
#define MINUTES_PER_HOUR 60
#define MINUTES_PER_HALF_DAY (HOURS_PER_HALF_DAY * MINUTES_PER_HOUR)

#define SIZE ((int) (sizeof(departures) / sizeof(departures[0])))

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
  int hours, minutes, desired_time, departure_time, departure_hour,
      arrival_time, arrival_hour;

  scanf("%d:%d", &hours, &minutes);
  desired_time = hours * MINUTES_PER_HOUR + minutes;

  find_closest_flight(desired_time, &departure_time, &arrival_time);

  printf("Closest departure time is ");

  departure_hour = departure_time / MINUTES_PER_HOUR;
  if (departure_hour == 0)
    departure_hour = HOURS_PER_HALF_DAY;
  else if (departure_hour > HOURS_PER_HALF_DAY)
    departure_hour -= HOURS_PER_HALF_DAY;
  printf("%d:%.2d ", departure_hour, departure_time % MINUTES_PER_HOUR);
  if (departure_time < MINUTES_PER_HALF_DAY)
    printf("a.m.");
  else
    printf("p.m.");

  printf(", arriving at ");

  arrival_hour = arrival_time / MINUTES_PER_HOUR;
  if (arrival_hour == 0)
    arrival_hour = HOURS_PER_HALF_DAY;
  else if (arrival_hour > HOURS_PER_HALF_DAY)
    arrival_hour -= HOURS_PER_HALF_DAY;
  printf("%d:%.2d ", arrival_hour, arrival_time % MINUTES_PER_HOUR);
  if (arrival_time < MINUTES_PER_HALF_DAY)
    printf("a.m.");
  else
    printf("p.m.");
  printf("\n");

  return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    if (desired_time <= ((8 * 60) + (103 / 2))) {
        *departure_time = 8 * 60;
        *arrival_time = 10 * 60 + 16;

    } else if (desired_time < ((9 * 60) + 43) + (96 / 2)) {
        *departure_time = 9 * 60 + 43;
        *arrival_time = 11 * 60 + 52;

    } else if (desired_time < ((11 * 60) + 19) + (88 / 2)) {
        *departure_time = 11 * 60 + 19;
        *arrival_time = 13 * 60 + 31;

    } else if (desired_time <= ((12 * 60) + 47) + (73 / 2)) {
        *departure_time = 12 * 60 + 47;
        *arrival_time = 15 * 60;

    } else if (desired_time <= ((14 * 60) + (105 / 2))) {
        *departure_time = 14 * 60;
        *arrival_time = 15 * 60 + 8;

    } else if (desired_time <= ((15 * 60) + 45) + (195 / 2)) {
        *departure_time = 15 * 60 + 45;
        *arrival_time = 17 * 60 + 55;

    } else if (desired_time <= ((19 * 60) + (165 / 2))) {
        *departure_time = 19 * 60;
        *arrival_time = 21 * 60 + 20;

    } else {
        *departure_time = 21 * 60 + 45;
        *arrival_time = 23 * 60 + 58;
    }
}

