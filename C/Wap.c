
#include <stdio.h>

int main() {
    int hours, minutes, seconds;

    printf("Enter the time in hh:mm:ss format: ");
    scanf("%d:%d:%d", &hours, &minutes, &seconds);

    // Increase the time by one second
    seconds++;

    // Handle overflow of seconds, minutes, and hours
    switch (seconds) {
        case 60:
            seconds = 0;
            minutes++;
            break;
        default:
            break;
    }

    switch (minutes) {
        case 60:
            minutes = 0;
            hours++;
            break;
        default:
            break;
    }

    switch (hours) {
        case 24:
            hours = 0;
            break;
        default:
            break;
    }

    printf("Time after increasing by one second: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
