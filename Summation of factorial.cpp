//File:计算阶乘的和.cpp
//该程序用于计算1!+2!+3!+……+30!,妈妈再也不用担心我的计算能力！
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int i,r=1,s=0;

    for (i=1;i<=30;++i){
    r=r*i;
    s+=r;
    }

    cout << "1!+2!+...+30!=" <<s<< endl;

    system("pause");
    return 0;
}
