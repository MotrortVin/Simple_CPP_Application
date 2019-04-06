#include <iostream>

using namespace std;

class Time
{
    friend int operator-(const Time &t1,const Time &t2){return t1.second-t2.second;}
    friend ostream &operator<<(ostream &os,const Time &t);
    int second;
public:
    Time(int tt=9,int mm=0,int ss=0){second=ss+mm*60+tt*3600;}
    Time &operator++(){++second;return *this;}
    Time operator++(int x)
    {
        Time tmp=*this;
        ++second;
        return tmp;
    }
    Time &operator--(){++second;return *this;}
    Time operator--(int x)
    {
        Time tmp=*this;
        ++second;
        return tmp;
    }
    Time &operator+=(const Time &other){second+=other.second;return *this;}
    Time &operator-=(const Time &other){second-=other.second;return *this;}
};

ostream &operator<<(ostream &os,const Time &t)
{
    int tt,mm,ss;
    tt=t.second/3600;
    mm=t.second%3600/60;
    ss=t.second%60;

    os<<tt<<":"<<mm<<":"<<ss;
    return os;
}
