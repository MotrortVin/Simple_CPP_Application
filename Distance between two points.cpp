//File:两点之间的距离计算.cpp
//你告诉我两个点，我会告诉你它们之间的距离。
#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{
    double x1,y1,x2,y2,dis;

    cout<<"请输入x1,y1:";
    cin>>x1>>y1;
    cout<<"请输入x2,y2:";
    cin>>x2>>y2;

    dis=sqrt(pow((x1-x2),2)+pow((y1-y2),2));

    cout<<"("<<x1<<","<<y1<<")和("<<x2<<","<<y2<<")之间的距离："<<dis<<endl;

    system("pause");

    return 0;
}
