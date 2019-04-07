//File:输入从m到n的素数个数.cpp
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
               j++;//排出2的特殊情况
           }
         continue;
       }
       if(isPrime(i)==false){
         j++; //计数
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
         flag=true;//判断是否为素数
       }
    }
    return flag;
}
