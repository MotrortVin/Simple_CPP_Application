//���벢�������.cpp
//������һ�����ڵ���10����С�ڵ���30��������
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    float a;
    float getNumber(float);

    cout<<getNumber(a)<<endl;

    system("pause");

    return 0;
}

float getNumber(float a)
{
    while(1){
        cout<<"������һ�����ڵ���10����С�ڵ���30����������";
        cin>>a;
        if (a-int(a)==0){//ȷ����������
            if(a>=10&&a<=30){//ȷ�����ķ�Χ��С
                break;
            }
        }
    }
    return a;
}
