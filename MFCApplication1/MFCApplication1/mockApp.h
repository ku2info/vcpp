#include <cstdio>

// Clock �N���X�̒�`
class Clock
{
public:
    int m_hour;
    int m_minute;
    int set(int hour, int minute, int& retval);
    int print(int& retval);
};

