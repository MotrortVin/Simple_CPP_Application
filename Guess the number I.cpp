//File:猜数字.cpp
//程序首先产生一个1~100之间的整数，1输入自己的猜测。如果玩家的猜测是不正确的，程序应继续循环，直到玩家最终猜对为止。
//此过程中程序一直以使玩家是猜大了还是猜小了，这样可以帮助玩家获得正确的答案。
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int a,b,n;
    char s;

    while(1){//控制游戏次数
      cout<<"I have a number bewteen 1 and 100."<<endl;

      srand(time(NULL));
      a=rand()%100+1;//产生随机数

      cout<<"Please input your guess:";
      cin>>b;//玩家输入所猜测的数字

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
      if (s=='n') break;//控制跳出游戏
    }

    system("pause");

    return 0;
}
