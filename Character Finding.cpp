//File:从文段中找字符.cpp
//编入一个以回车结束的字符串（少于80个字符），接着再输入一个字符，查找该字符在字符串中是否存在。
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int i=0,n=-1;
    char character;
    char str[81];

    cout<<"Please input a string:";
    cin.getline (str,81);//输入文段
    cout<<"please input a character:";
    cin>>character;//输入待查找的字符

    while (str[i]!='\0') {
      if (str[i]==character) {//逐一查找
        n=i+1;
      }
      i++;
    }

    if (n<0) {
    cout<<"Not Found"<<endl;
    }
    else {
    cout<<"Index="<<n<<endl;
    }

    system ("pause");

    return 0;

}
