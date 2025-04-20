#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>//for sleep() function
int main()
{
    int hours, seconds, minutes;
    minutes=hours=seconds=0;
    while(1)
    {
        //clear output screen
        system("clear");
        printf("%02d : %02d : %02d",hours,minutes,seconds);
        //printing time in HH:MM:SS format
    fflush(stdout);
     //increase seconds
     seconds++;
     if(seconds==60)
     {
        minutes+=1;
        seconds=0;
     }
     if(minutes==60)
     {
     hours+=1;
     minutes=0;
     }
     if(hours==24)
     {
        seconds=0;
        minutes=0;
        hours=0;
     }
    sleep(1); //to pause program for 1 seconds
    }
    return 0;
}
