//File:����֮��ľ������.cpp
//������������㣬�һ����������֮��ľ��롣
#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{
    double x1,y1,x2,y2,dis;

    cout<<"������x1,y1:";
    cin>>x1>>y1;
    cout<<"������x2,y2:";
    cin>>x2>>y2;

    dis=sqrt(pow((x1-x2),2)+pow((y1-y2),2));

    cout<<"("<<x1<<","<<y1<<")��("<<x2<<","<<y2<<")֮��ľ��룺"<<dis<<endl;

    system("pause");

    return 0;
}
