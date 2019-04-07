//进制转化.cpp
//将十进制的数转化为任意进制（大于等于2，小于等于16）
#include <iostream>
#include <stdlib.h>

using namespace std;

char printInt(int n,int base);

int main()
{
    int n,base;
    cout<<"Please input n,base(n进制):";
    cin>>n>>base;//输入变量

    printInt(n,base);//运行函数

    system("pause");

    return 0;
}

char printInt(int n,int base)
{
    int a=1,i=0,x=base,j;
    char s[1000];//定义辅助字符串
    while(base!=0){//除k取余法
        a=base%n;
        if(a<=9){
            s[i]=a+'0';
        }
        else{
            s[i]=a+55;
        }
        base=base/n;
        j=i;
        ++i;
    }//先把数据倒序保留在辅助字符串中
    char f[100];
    for(int i=0;i<=j;i++){
        f[i]=s[j-i];
    }//倒序编排到目的字符串中
    cout<<x<<"(10)="<<f<<"("<<n<<")"<<endl;

    return 0;
}
