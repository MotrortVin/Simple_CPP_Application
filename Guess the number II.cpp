//FIle:��������Ϸ.cpp
//�㽫���ߴλ���²������������Ĳ�ͬ���������֣�A��ʾ���ֲ¶�λ��Ҳ�¶Ե����ֵĸ�����B��ʾ���ֲ¶�λ��û�¶Ե����ֵĸ�����

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{
    int x,i=0,j=0,k=0,a,b,c,A=0,B=0;
    cout<<"�㽫���ߴλ���²������������Ĳ�ͬ����������(10����)��A��ʾ���ֲ¶�λ��Ҳ�¶Ե����ֵĸ�����B��ʾ���ֲ¶�λ��û�¶Ե����ֵĸ�����";
    while (i==j||j==k||i==k) {
      srand(time(NULL));
      i=rand()*10/(RAND_MAX+1);
      j=rand()*10/(RAND_MAX+1);
      k=rand()*10/(RAND_MAX+1);
    }
    for (x=1;x<=7;x++) {
     cout<<"��������²�����֣�����"<<8-x<<"�λ���)��";
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
        cout<<"���ź�����û���ڹ涨�����ڲ¶ԡ�����"<<i<<j<<k<<"��"<<endl;
    }
    else cout<<"��ϲ����¶��ˡ�"<<endl;

    system("pause");

    return 0;
}
