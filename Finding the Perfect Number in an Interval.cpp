//File:完美数的检验.cpp
//完美数所有的真因子的和等于它本身
#include <stdlib.h>
#include <iostream>

using namespace std;

bool perfectNumber(int n);

int main()
{
    int m,n,j=0;

    cout<<"Please input m,n:";
    cin>>m>>n;
    cout<<"Perfect number in ["<<m<<","<<n<<"]:";//标示

    for(int i=m;i<=n;i++){
       if(i<2){
         continue;
       }
       if(perfectNumber(i)==true){
         cout<<i<<" "; //输出完美数
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
           j+=i;//因数的累加
         }
    }
    if(j==n){//转化的思想
      flag=true;//判断是否为完美数
    }
    return flag;
}
