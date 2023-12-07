#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int daysInMonth[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };
    char *weekDays[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int days, year, month, day, weekDay;
    int count = 6;

    while (scanf("%d", &days) && days != -1) {
        count = 6;
        year = 2000;
        while (days >= 365 + isLeapYear(year)) {
            days -= 365 + isLeapYear(year);
            count += 365 + isLeapYear(year);
            year++;
        }

        month = 1;
        while (days >= daysInMonth[isLeapYear(year)][month]) {
            days -= daysInMonth[isLeapYear(year)][month];
            count += daysInMonth[isLeapYear(year)][month];
            month++;
        }

        day = days + 1;
        count += days;
        weekDay = (count + 6) % 7;

        printf("%04d-%02d-%02d %s\n", year, month, day, weekDays[weekDay]);
    }

    return 0;
}