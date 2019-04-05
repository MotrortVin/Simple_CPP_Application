//File:字符串的排列.cpp
//输入一个字符串（少于80个字符），去掉重复的字符后，按照字符的ASCII码值从大到小输出。
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int n=0,m=0,i;
    bool flag;
    char str[80];

    cout<<"Please input a string:";
    cin.getline (str,80);

    for (i=0;str[i]!='\0';++i) {
        flag=false;
        for (int j=0;str[j+1]!='\0';++j) {
            if (str[j+1]>str[j]) {
                m=str[j+1];
                str[j+1]=str[j];
                str[j]=m;
                flag=true;
            }
        }
        if (!flag) break;
    }//用于给字符串排序
    int a=0,b=0;
    while (str[a+1]!='\0') {
        if (str[a]==str[a+1]) {
            b=a;
            while (str[b]!='\0') {
                str[b]=str[b+1];
                b++;
            }
        }
        else
            a++;
    }//将相同的字符去掉

    cout<<str<<endl;

    system ("pause");

    return 0;
}
