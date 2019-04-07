//File:鸡兔同笼问题.cpp
//有了这款程序后妈妈再也不用担心我不会做鸡兔同笼问题啦！
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,m,chicken,rabbit;

    cout<<"请输入n，m：";//n为头数；m为脚数。
    cin>>n>>m;

    if (m%2==0&&4*n>=m&&m>=2*n){
      rabbit=(m-2*n)/2;
      chicken=(4*n-m)/2;
      cout<<"鸡:"<<chicken<<","<<"兔:"<<rabbit<<endl;
    }
    else
      cout<<"无解"<<endl;

    system("pause");
    return 0;
}
