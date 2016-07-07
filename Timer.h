#ifndef TIMER_LAB_TIMER_H
#define TIMER_LAB_TIMER_H


class Timer {
public:

    Timer ();

    void Start ();

    void Running ();
    void Pause ();
    void Stop ();

private:

    bool started;
    bool paused;
    bool stopped;

    int milliseconds;   // desiseconds
    int seconds;
    int minutes;
    int hours;

};


#endif //TIMER_LAB_TIMER_H
