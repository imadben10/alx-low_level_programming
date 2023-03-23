#include "main.h"
#include <stdio.h>

int main(void)
{
    int month;
    int day;
    int year;
    int dayOfYear;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    dayOfYear = convert_day(month, day);

    printf("Day of the year: %d\n", dayOfYear);

    print_remaining_days(month, day, year);

    return (0);
}
