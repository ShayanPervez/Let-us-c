#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDayOfWeek(int year) {
    int total_days = 0;
    for (int y = 1; y < year; y++) {
        if (isLeapYear(y))
            total_days += 366;
        else
            total_days += 365;
    }
    return (1 + total_days) % 7;  // 1 for Monday on 01/01/0001
}

const char* dayName(int day) {
    const char* names[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    return names[day];
}

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    int day = getDayOfWeek(year);
    printf("1st January %d is a %s\n", year, dayName(day));
    return 0;
}
