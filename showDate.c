#include <stdio.h>
#include <time.h>
 
int main(void)
{
    int year, month, day;
 
    time_t now;
    time(&now);

    struct tm *local = localtime(&now);
 
    day = local->tm_mday;            // get day of month (1 to 31)
    month = local->tm_mon + 1;       // get month of year (0 to 11)
    year = local->tm_year + 1900;    // get year since 1900
 
    printf("Date is: %d-%02d-%02d\n", year, month, day);
 
    return 0;
}