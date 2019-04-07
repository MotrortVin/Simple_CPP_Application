#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
    int l,a,b,c;                     //"c"代表菱形的棱长
    cout<<"请输入1~11内的一个奇数:"<<endl;
    cin>>c;

    l=(c+1)/2;
    for(a=1;a<=l;a++){
      cout<<setw(l-a+1);
      for(b=1;b<=2*a-1;b++){
         cout<<"*";
       }
    cout<<endl;

     }
    for(a=l-1;a>0;a--){
      cout<<setw(l-a+1);
      for(b=1;b<=2*a-1;b++){
         cout<<"*";
      }
      cout<<endl;
    }
    cout<<"Surprise!"<<endl;
    system("pause");
    return 0;
}
