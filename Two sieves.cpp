//File:计算投骰子可能出现的和的次数.cpp
//该程序模拟掷两个骰子，程序首先提示用户输入掷这两个投资的总次数，接着用rand掷第一个骰子，再用rand掷第二个骰子。
//然后计算这两个值的和，用数组记录每个可能的和出现的次数。以表格的形式打印结果，并判断两数之和是否合理。
#include <iostream>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int main()
{
    int i,n,a,b;
    int ad[11]={0};

    cout<<"请输入您要掷这两个骰子的总次数：";
    cin>>n;

    for (i=1;i<=n;i++) {
        a=rand()%6;
        b=rand()%6;
        if (a==0) a=6;
        if (b==0) b=6;

        ad[a+b-2]++;
        }

    cout<<"两个骰子点数之和的所有可能取值为2~12，在"<<n<<"次实验中："<<endl;
    for (i=1;i<=11;i++) {
        cout<<"两个骰子点数之和为"<<i+1<<"的出现次数为："<<ad[i-1]<<"次。"<<endl;
    }

    system("pause");

    return 0;
}
