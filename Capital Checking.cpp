//检测输入的是否为大写字母.cpp
//如果入蜀的不是大写字母，就要重新输入。
#include <iostream>
#include <stdlib.h>

using namespace std;

char getUChar(char a);

int main()
{
    char a;

    cout<<getUChar(a)<<endl;

    system("pause");

    return 0;
}

char getUChar(char a)
{
    do {
        cout<<"请输入一个大写字母:";
        cin>>a;
    }while(a<'A'||a>'Z');
return a;
}


