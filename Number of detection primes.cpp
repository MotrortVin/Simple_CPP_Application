//File:�����m��n����������.cpp
#include <stdlib.h>
#include <iostream>

using namespace std;

bool isPrime(int n);

int main()
{
    int m,n,j=0;

    cout<<"Please input m,n:";
    cin>>m>>n;//Input:m,n

    for(int i=m;i<=n;i++){
       if(i<2){
           if(i==2){
               j++;//�ų�2���������
           }
         continue;
       }
       if(isPrime(i)==false){
         j++; //����
       }
    }
    cout<<"Count="<<j<<endl;

    system("pause");

    return 0;
}

bool isPrime(int n)
{
    bool flag=false;

    for(int i=2;i<n;++i){
       if(n%i==0){
         flag=true;//�ж��Ƿ�Ϊ����
       }
    }
    return flag;
}
