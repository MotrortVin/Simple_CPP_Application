//File:三位整数的百位数、十位数、个位数.cpp
//用于神奇地告诉你：你所给的三位数的百位数、十位数、个位数！呵呵。
#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
   int num;

   cout<<"请输入一个三位整数：";
   cin>>num;

   cout<<num<<"的百位数字是"<<num/100<<"，十位数字是"<<(num/10)%10<<"，个位数字是"<<num%10<<endl;

   system("pause");
   return 0;
}
