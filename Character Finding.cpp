//File:���Ķ������ַ�.cpp
//����һ���Իس��������ַ���������80���ַ���������������һ���ַ������Ҹ��ַ����ַ������Ƿ���ڡ�
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int i=0,n=-1;
    char character;
    char str[81];

    cout<<"Please input a string:";
    cin.getline (str,81);//�����Ķ�
    cout<<"please input a character:";
    cin>>character;//��������ҵ��ַ�

    while (str[i]!='\0') {
      if (str[i]==character) {//��һ����
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
