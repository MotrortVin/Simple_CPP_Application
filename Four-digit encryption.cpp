//File:四位数的加密.cpp
//请告诉我一个四位数，我会帮你加密！
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int num,a,b,c,d;

    cout<<"请输入一个四位数：";
    cin>>num;

    a=num/1000;
    b=(num/100)%10;
    c=(num/10)%10;
    d=num%10;
    char A=a+13+64;
    char B=b+13+64;
    char C=c+13+64;
    char E=d+13+64;

    cout<<A<<B<<C<<E<<endl;

    system("pause");

    return 0;
}
