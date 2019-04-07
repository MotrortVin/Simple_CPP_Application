//File：约瑟夫环问题.cpp
//约瑟夫环问题：n个人围成一圈，按顺序从1到n编号。从第一个人开始报数1、2、3，报到3者退出圈子，下一个人从1开始报数，求最后留下来的那个人的编号。
#include <iostream>

using namespace std;

int Last(int n);

int main()
{
    int n,r;
    //初始化数组。
    cout<<"Please input n:";
    cin>>n;
    //运行函数，输出结果。
    cout<<"Last code:"<<Last(n)+1<<endl;

    char c;
    cin>>c;
    return 0;
}

int Last(int n)
{
    //计数器初始化。
    int k=0,i=0,a=0,*p;
    int s[2000];//当n太大，导致所需内存不够时，可以适当放大此处的数值。
    p=&s[0];
    //数组初始化。
    for(int i=0;i<n;++i){
        s[i]=i;
    }
    //将数组中不符合要求的数字去除后，将新数组复制在其后。
    do{
        if(a!=2){//如果是报到其他数字的人退出的话，修改此处的条件就好。
            p[n+k]=p[i];
            ++k;
            ++a;
        }
        else{
            a=0;
        }
        ++i;
    }while(n+k!=i);
    return s[n+k-1];
}
