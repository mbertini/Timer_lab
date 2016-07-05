#include "Date.h"
#include "Timer.h"

int main()
{


    Date a;
    a.DateNumForm();
    a.DateCharForm();
    a.DateReverseForm();

    a.showTime();

    Timer t;
    t.Start();

    return 0;
}