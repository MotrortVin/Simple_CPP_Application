//���������Ƿ�Ϊ��д��ĸ.cpp
//�������Ĳ��Ǵ�д��ĸ����Ҫ�������롣
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
        cout<<"������һ����д��ĸ:";
        cin>>a;
    }while(a<'A'||a>'Z');
return a;
}


