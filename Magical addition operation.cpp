//File:����ļӷ�����.cpp
//���ڼ��㣺a+aa+aaa+����+aaa����aaa(��n��a)��ֵ��
#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
    int a,n,i,k=0,s=0;

    cout<<"Input a,n:";
    cin>>a>>n;

    for (i=0;i<n;i++) {
      k+=a;
      s+=k;
      a=a*10;
    }

    cout<<"Sum="<<s<<endl;

    system("pause");

    return 0;
}
