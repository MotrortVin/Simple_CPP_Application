//File:����ͬ������.cpp
//�����������������Ҳ���õ����Ҳ���������ͬ����������
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,m,chicken,rabbit;

    cout<<"������n��m��";//nΪͷ����mΪ������
    cin>>n>>m;

    if (m%2==0&&4*n>=m&&m>=2*n){
      rabbit=(m-2*n)/2;
      chicken=(4*n-m)/2;
      cout<<"��:"<<chicken<<","<<"��:"<<rabbit<<endl;
    }
    else
      cout<<"�޽�"<<endl;

    system("pause");
    return 0;
}
