//complete
//45 - Write a program to convert date and time in Epoch counter.
//Epoch: https://www.epochconverter.com/
//strftime: https://www.thinkage.ca/gcos/expl/c/lib/strfti.html
//time.h: https://www.geeksforgeeks.org/time-h-header-file-in-c-with-examples/

#include <stdio.h>
#include <time.h>
//22 August 2022 Monday Epoch time: 1661148678

void main() {
    struct tm t;
    time_t t_of_day,year;

	printf("Enter Date/Month/Year: ");
	scanf("%d/%d/%d",&t.tm_mday, &t.tm_mon, &year);
	t.tm_year = year-1900;		// Year - 1900 , The number of years since 1900
	
    printf("\nEnter Time(Hour/min/sec): ");
	scanf("%d:%d:%d",&t.tm_hour, &t.tm_min, &t.tm_sec);

	t.tm_isdst = -1;        // Is DST on? 1 = yes, 0 = no, -1 = unknown
    t_of_day = mktime(&t);

    printf("\nSeconds since the Epoch: %ld\n", (long) t_of_day);
}
