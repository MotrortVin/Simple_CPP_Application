//��ŵ������.cpp
//��ŵ������֪��������Թ�����
#include <iostream>
#include <stdlib.h>

using namespace std;

void Hanoi(int n,char start,char finish,char temp);

int main()
{
    int n,k;
    char a,b,c;

    cout<<"����������(��λ��)��";
    cin>>k;

    while(1){
      if(k==844766049){
        cout<<"�������һ�����������ӵĸ�����";
        cin>>n;
        cout<<"����������Ӹ��԰�����ȡһ��Ӣ����ĸ��Ϊ��������:";
        cin>>a>>b>>c;

        Hanoi(n,a,b,c);
        break;
      }
      else{
        cout<<"���벻��ȷ�����������룺";
        cin>>k;
      }
    }
    system("pause");

    return 0;
}

void Hanoi(int n,char start,char temp,char finish)
{
    if(n==1) cout<<start<<"->"<<finish<<'\t';//��һ������
    else{
        Hanoi(n-1,start,temp,finish);//�ҵ�����
        cout<<start<<"->"<<finish<<'\t';
        Hanoi(n-1,temp,finish,start);
    }
}
