#include "pch.h"
#include "mockApp.h"

int Clock::set(int hour, int minute, int& retval)
{
    this->m_hour = hour % 24;
    this->m_minute = minute % 60;

    return retval;
}

int Clock::print(int& retval)
{
    printf("%02d:%02d\n", m_hour, m_minute);
    fflush(stdout);

    return retval;
}


