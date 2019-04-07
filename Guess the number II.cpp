//FIle:猜数字游戏.cpp
//你将有七次机会猜测计算机所给出的不同的三个数字，A表示数字猜对位置也猜对的数字的个数，B表示数字猜对位置没猜对的数字的个数。

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{
    int x,i=0,j=0,k=0,a,b,c,A=0,B=0;
    cout<<"你将有七次机会猜测计算机所给出的不同的三个数字(10以内)，A表示数字猜对位置也猜对的数字的个数，B表示数字猜对位置没猜对的数字的个数。";
    while (i==j||j==k||i==k) {
      srand(time(NULL));
      i=rand()*10/(RAND_MAX+1);
      j=rand()*10/(RAND_MAX+1);
      k=rand()*10/(RAND_MAX+1);
    }
    for (x=1;x<=7;x++) {
     cout<<"请输入你猜测的数字（还有"<<8-x<<"次机会)：";
     cin>>a>>b>>c;

     A=0;
     B=0;
     if (a==i||b==i||c==i) {
        if (a==i) {
            A++;
        }
        else B++;
     }
     if (a==j||b==j||c==j) {
        if (b==j) {
            A++;
        }
        else B++;
     }
     if (a==k||b==k||c==k) {
        if (c==k) {
            A++;
        }
        else B++;
     }

     cout<<A<<"A"<<B<<"B"<<endl;
    if (A==3&&B==0) break;
    }

    if (A!=3||B!=0) {
        cout<<"很遗憾，你没有在规定次数内猜对。答案是"<<i<<j<<k<<"。"<<endl;
    }
    else cout<<"恭喜，你猜对了。"<<endl;

    system("pause");

    return 0;
}
