#include <iostream>   // for cout
#include <ctime>      // for time_t, tm, difftime, time, mktime

int main()
{
    time_t now;
    struct tm newyear;
    double seconds;

    time(&now);  // get current time; same as: now = time(NULL);

    newyear = *localtime(&now);

    newyear.tm_hour = 0;
    newyear.tm_min = 0;
    newyear.tm_sec = 0;
    newyear.tm_mon = 0;
    newyear.tm_mday = 1;

    seconds = difftime(now, mktime(&newyear));

    std::cout << seconds << " seconds since new year in the current timezone." << std::endl;

    return 0;
}