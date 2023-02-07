#include <stdio.h>
#include <windows.h>

int main() {
    //hour delay of 1000 milliseconds to use in the sleep function
    int delay = 1000; 

    int hour;
    int minute;
    int second;
    char am_or_pm[20];

    printf("Set your time: \n");
    printf("Hour: ");
    scanf("%d", &hour);
    printf("Minute: ");
    scanf("%d", &minute);
    printf("Second: ");
    scanf("%d", &second);
    printf("AM or PM?: ");
    scanf("%s", &am_or_pm);

    if(hour > 12 || minute > 60 || second > 60) {
        printf("Error, you have set an incorrect time increment");
        exit(0);
    }

    //infinte loop that will continue on forever while the program runs
    while(1) {
        second++;
        if (second > 59) {
            minute++;
            second = 0;
        }

        if(minute > 59) {
            hour++;
            minute = 0;
        }

        if(hour > 12) {
            hour = 1;
        }

        printf("\n The time is:");
        //write time in formate 00:00:00
        printf("\n %02d:%02d:%02d %s", hour, minute, second,am_or_pm);
        //function to slow down the while loop to emulate the clock
        Sleep(delay);
        //clears the screen
        system("cls");
    }

}