//¸´ÊıµÄÔËËã¡£
#include <iostream>

using namespace std;

struct number
{
    double a,b;
}

void setpoint(double a,double b,number &p);

int main()
{
    number p1,p2;
    cout<<"x=ai+b"<<"\nPlease input a b:";
    cin>>a>>b;
    cout<<"\ny=ci+d"<<"\nPlease input c d:";
    cin>>c>>d;

    setpoint(a,b,p1);


    return 0;
}
