#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;
int isLeapYear(int year);
int isValidDate(Date date);
int daysBetweenDates(Date d1, Date d2);
const char* getDayOfWeek(Date date);
int isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}
int isValidDate(Date date) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(date.year) && date.month == 2)
        daysInMonth[1] = 29;

    return (date.month >= 1 && date.month <= 12 &&
            date.day >= 1 && date.day <= daysInMonth[date.month - 1]);
}
int daysBetweenDates(Date d1, Date d2) {
    int days1 = d1.year * 365 + d1.day;
    int days2 = d2.year * 365 + d2.day;

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < d1.month - 1; i++)
        days1 += daysInMonth[i];
    for (int i = 0; i < d2.month - 1; i++)
        days2 += daysInMonth[i];

    for (int i = 1; i < d1.year; i++)
        days1 += isLeapYear(i);
    for (int i = 1; i < d2.year; i++)
        days2 += isLeapYear(i);

    return days2 - days1;
}
const char* getDayOfWeek(Date date) {
    static const char* days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int d = date.day, m = date.month, y = date.year;

    if (m < 3) {
        m += 12;
        y--;
    }

    int k = y % 100;
    int j = y / 100;
    int h = (d + (13 * (m + 1)) / 5 + k + (k / 4) + (j / 4) - 2 * j) % 7;
    return days[(h + 5) % 7];
}

int main() {
    Date d1 = {28, 11, 2024};
    Date d2 = {1, 1, 2025};

    if (!isValidDate(d1) || !isValidDate(d2)) {
        printf("One or both dates are invalid.\n");
        return 1;
    }

    printf("Days between %02d/%02d/%04d and %02d/%02d/%04d: %d\n",
           d1.day, d1.month, d1.year, d2.day, d2.month, d2.year,
           daysBetweenDates(d1, d2));

    printf("Day of the week for %02d/%02d/%04d: %s\n",
           d1.day, d1.month, d1.year, getDayOfWeek(d1));

    return 0;
}
