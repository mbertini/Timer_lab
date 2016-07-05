#ifndef TIMER_LAB_DATE_H
#define TIMER_LAB_DATE_H

class Date {
public:

    Date ();

    void showTime ();       //
    void DateNumForm ();    // transforms date into numeric form ( 31/12/2016 )
    void DateCharForm ();    // transforms date into characters form ( 31 december 2016 )
    void DateReverseForm ();    // date reversed form "english form" ( 12/31/2016 )

private:

    int day;
    int month;
    int year;

};


#endif //TIMER_LAB_DATE_H
