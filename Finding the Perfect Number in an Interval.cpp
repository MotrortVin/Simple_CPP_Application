//File:�������ļ���.cpp
//���������е������ӵĺ͵���������
#include <stdlib.h>
#include <iostream>

using namespace std;

bool perfectNumber(int n);

int main()
{
    int m,n,j=0;

    cout<<"Please input m,n:";
    cin>>m>>n;
    cout<<"Perfect number in ["<<m<<","<<n<<"]:";//��ʾ

    for(int i=m;i<=n;i++){
       if(i<2){
         continue;
       }
       if(perfectNumber(i)==true){
         cout<<i<<" "; //���������
       }
    }

    system("pause");

    return 0;
}

bool perfectNumber(int n)
{
    bool flag=false;
    int j=0;

    for(int i=1;i<n;++i){
         if(n%i==0){
           j+=i;//�������ۼ�
         }
    }
    if(j==n){//ת����˼��
      flag=true;//�ж��Ƿ�Ϊ������
    }
    return flag;
}
