//File:整数的和、积、商和余数.cpp
//如果两个双精度浮点数进行上述运算，题目的要求不能都达到。因为难以得到它们的商和余数。因为根据定义，商和余数都应该为整数。
//而小数除以小数，得到的“商”不是实际意义上的商，余数亦难以得到。
#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int num1,num2;

    cout<<"请输入两个整数(两数用空格隔开)：";
    cin>>num1>>num2;

    cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
    cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
    cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
    cout<<num1<<"%"<<num2<<"="<<num1%num2<<endl;

    system("pause");
    return 0;
}
