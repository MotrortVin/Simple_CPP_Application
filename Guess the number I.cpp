//File:������.cpp
//�������Ȳ���һ��1~100֮���������1�����Լ��Ĳ²⡣�����ҵĲ²��ǲ���ȷ�ģ�����Ӧ����ѭ����ֱ��������ղ¶�Ϊֹ��
//�˹����г���һֱ��ʹ����ǲ´��˻��ǲ�С�ˣ��������԰�����һ����ȷ�Ĵ𰸡�
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int a,b,n;
    char s;

    while(1){//������Ϸ����
      cout<<"I have a number bewteen 1 and 100."<<endl;

      srand(time(NULL));
      a=rand()%100+1;//���������

      cout<<"Please input your guess:";
      cin>>b;//����������²������

      while (1){
          if(b<a){
              cout<<"Too low! Try again:";
              cin>>n;
              b=n;
          }
          else if(b>a){
                 cout<<"Too high! Try again:";
                 cin>>n;
                 b=n;
               }
               else {
                  cout<<"Excellent! You guessed the number!"<<endl;
                  break;
               }
      }
      cout<<"Would you want to play again (y or n)?";
      cin>>s;
      if (s=='n') break;//����������Ϸ
    }

    system("pause");

    return 0;
}
