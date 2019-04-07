//汉诺塔问题.cpp
//汉诺塔，不知道？你可以狗带了
#include <iostream>
#include <stdlib.h>

using namespace std;

void Hanoi(int n,char start,char finish,char temp);

int main()
{
    int n,k;
    char a,b,c;

    cout<<"请输入密码(九位数)：";
    cin>>k;

    while(1){
      if(k==844766049){
        cout<<"请输入第一个柱子上盘子的个数：";
        cin>>n;
        cout<<"请给三根柱子各自按次序取一个英文字母作为它的名字:";
        cin>>a>>b>>c;

        Hanoi(n,a,b,c);
        break;
      }
      else{
        cout<<"密码不正确，请重新输入：";
        cin>>k;
      }
    }
    system("pause");

    return 0;
}

void Hanoi(int n,char start,char temp,char finish)
{
    if(n==1) cout<<start<<"->"<<finish<<'\t';//第一次运行
    else{
        Hanoi(n-1,start,temp,finish);//找到玄机
        cout<<start<<"->"<<finish<<'\t';
        Hanoi(n-1,temp,finish,start);
    }
}
