#include <iostream>
#include <windows.h>

#include "Timer.h"


Timer::Timer() {

    started = false;
    paused = true;
    stopped = true;

    milliseconds = 0;
    seconds = 0;
    minutes = 0;
    hours = 0;

}


void Timer::Running() {

    bool esc = false;

    while ( esc == false) {


        if (milliseconds == 10) {
            ++seconds;
            milliseconds = 0;
        }
        if (seconds == 60) {
            ++minutes;
            seconds = 0;
        }
        if (minutes == 60) {
            ++hours;
            minutes = 0;
        }
        std::cout << hours << ":" << minutes << ":" << seconds << "." << milliseconds << std::endl;
        ++milliseconds;
        Sleep(100);


        if ( GetAsyncKeyState(VK_SPACE) ) {
            Timer::Pause();
            if (paused)
                esc = true;

        }

        if ( GetAsyncKeyState(VK_ESCAPE) ) {
            Timer::Stop();
            if (stopped)
                esc = true;
        }

    }

}


void Timer::Start() {

    if (paused || stopped) {
        started = true;

        std::cout << "running" << std::endl;

        paused = false;
        stopped = false;

        Timer::Running();

    }
    else
        std::cout << "already running" << std::endl;

}

void Timer::Pause() {

    if (started) {
        paused = true;

        std::cout << "paused" << std::endl;
        std::cout << hours << ":" << minutes << ":" << seconds << "." << milliseconds << std::endl;

    }
    else
        std::cout << "already paused" << std::endl;

}

void Timer::Stop() {

    if (started) {
        started = false;
        paused = true;
        stopped = true;

        milliseconds = seconds = minutes = hours = 0;
        std::cout << "stopped" << std::endl;

    }
    else
        std::cout << "already stopped" << std::endl;

}