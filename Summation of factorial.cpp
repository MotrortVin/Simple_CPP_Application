//File:����׳˵ĺ�.cpp
//�ó������ڼ���1!+2!+3!+����+30!,������Ҳ���õ����ҵļ���������
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
