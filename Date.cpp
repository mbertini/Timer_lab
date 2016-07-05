#include <iostream>
#include <ctime>

#include "Date.h"


    time_t now;
    struct tm date;

Date::Date() {

    now = time(NULL);   // gets the time form OS
    date = *localtime(&now);

    day = date.tm_mday;
    month = date.tm_mon+1;
    year = date.tm_year+1900;

    std::cout << day << "/" << month << "/" << year << std::endl;

}


void Date::showTime() {

    std::cout << "Time:" << std::endl;

    now = time(NULL);   // gets the time form OS
    date = *localtime(&now);

    int sec= date.tm_sec;
    int min= date.tm_min;
    int hour= date.tm_hour;

    std::cout << hour << ":" << min << ":" << sec << std::endl;

}


void Date::DateNumForm() {

    std::cout << "numbers date" << std::endl;
    std::cout << day << "/" << month << "/" << year << std::endl;   // output the date in numeric form

}

void Date::DateCharForm() {

    std::string m;
    if (month == 1)
        m= "January";
    if (month == 2)
        m= "February";
    if (month == 3)
        m= "March";
    if (month == 4)
        m= "April";
    if (month == 5)
        m= "May";
    if (month == 6)
        m= "June";
    if (month == 7)
        m= "July";
    if (month == 8)
        m= "August";
    if (month == 9)
        m= "September";
    if (month == 10)
        m= "October";
    if (month == 11)
        m= "November";
    if (month == 12)
        m= "December";

    std::cout << "character date" <<std::endl;
    std::cout << day << "  " << m << "  " << year << std::endl;     // output the date in the character form

}

void Date::DateReverseForm() {

    std::cout << "reverse form date" << std::endl;
    std::cout << month << "/" << day << "/" << year << std::endl;

}