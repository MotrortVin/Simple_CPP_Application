//File:���ǲ��ǻ�������.cpp
//ι�����ҵĳ�������㣺���ǲ��ǻ���������QAQ
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,a,b,c,d;

    cout<<"������һ��5λ��������";
    cin>>n;

    a=n%10;
    b=(n/10)%10;
    c=(n/1000)%10;
    d=n/10000;

    if (a==d&&b==c){
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;

    system ("pause");

    return 0;
}
