//File:The Amasing Electrical Clock.cpp
#include <iostream>

using namespace std;

//Form the structure of the clock.
struct clockT
{
    int hh;
    int mm;
    int ss;
};
//Input the time.
void setTime(clockT &c,int h,int m,int s);
//A second passes.
void increase(clockT &c);
//Let me tell you the time now.
void showTime(clockT &c);

int main()
{
    int h,m,s;
    clockT c;
//Input thye time.
    cout<<"Please input the time:";
    cin>>h>>m>>s;
//I'll tell you the time after a second from the time that you've told me.
    steTime(c,h,m,s);
    increase(c);
    showTime(c);
    return 0;
}

void setTime(clockT &c,int h,int m,int s)
{
    c.hh=h;
    c.mm=m;
    c.ss=s;
}

void increase(clockT &c)
{
    ++c.ss;
    if(c.ss==60){//60second=1minute.
      ++c.mm;
      c.ss=0;
    }
    if(c.mm==60){//60minute=1hour.
      ++c.hh;
      c.mm=0;
    }
    if(c.hh==24)c.hh=0;
}

void showTime(clockT &c)
{
    cout<<"The time after a second is:";
    if(c.hh<10) cout<<"0"<<c.hh<<":";
    else cout<<c.hh<<":";
    if(c.mm<10) cout<<"0"<<c.mm<<":";
    else cout<<c.mm<<":";
    if(c.ss<10) cout<<"0"<<c.ss<<endl;
    else cout<<c.ss<<endl;
}

