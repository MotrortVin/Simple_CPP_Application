#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
    int l,a,b,c;                     //"c"�������ε��ⳤ
    cout<<"������1~11�ڵ�һ������:"<<endl;
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
