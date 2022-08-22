//complete
//44 - Write a program to convert Epoch counter in a date and time formate.
//Epoch: https://www.epochconverter.com/
//strftime: https://www.thinkage.ca/gcos/expl/c/lib/strfti.html
//time.h: https://www.geeksforgeeks.org/time-h-header-file-in-c-with-examples/


#include <stdio.h>
#include <time.h>
#define MAXBUFFERSIZE 80
//22 August 2022 Monday Epoch time: 1661148678

void main()
{
    time_t     now,current;
    struct tm  ts;
    char       buf[MAXBUFFERSIZE];
	
	//prints current epoch time for reference
    printf("Current Epoch Time: %d\n", time(&current));
    
	//Get epoch time from the user 
	printf("Enter Epoch time: ");
	scanf("%d",&now);
    // Get current time
    //time(&now);

    // Format time, "ddd yyyy-mm-dd hh:mm:ss zzz"
    ts = *localtime(&now);				//localtime uses pointed time to fill values in tm structure 
    strftime(buf, sizeof(buf), "\n%a %d-%m-%Y %H:%M:%S %Z", &ts);
    printf("%s\n", buf);
}
