//File��ͳ��������Ӣ�ġ����ֵ�.cpp
//�������£�ͳ����Ӣ�ġ����֡����������ִ�����
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,character=0,num=0,other=0,i,j;//��������ʼ��
    char s[80];

    cout<<"������������";
    cin>>n;
    cin.get();
    char a[n][80];
    cout<<"������Ӣ�����£�"<<endl;
    for(i=0;i<n;++i)
        cin.getline(a[i],80,'\n');
    for(i=0;i<n;++i){
        for(j=0;a[i][j]!='\0';j++){
            if(a[i][j]>='0'&&a[i][j]<='9'){
                num++;
                continue;
            }
            if(a[i][j]>='a'&&a[i][j]<='z'){
                character++;
                continue;
            }
            if(a[i][j]>='A'&&a[i][j]<='Z'){
                character++;
                continue;
            }
            if(a[i][j]!=' ')
                other++;
        }
    }

    cout<<"Ӣ����ĸ:"<<character<<endl;
    cout<<"���֣�"<<num<<endl;
    cout<<"�����ַ�"<<other<<endl;

    system("pause");

    return 0;
}
