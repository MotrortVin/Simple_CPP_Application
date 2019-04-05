//File:你是不是回文数？.cpp
//喂，让我的程序告诉你：你是不是回文数……QAQ
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,a,b,c,d;

    cout<<"请输入一个5位正整数：";
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
