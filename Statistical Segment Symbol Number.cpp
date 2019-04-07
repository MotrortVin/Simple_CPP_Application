//File：统计文章中英文、数字等.cpp
//输入文章，统计其英文、数字、其他标点出现次数。
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,character=0,num=0,other=0,i,j;//计数器初始化
    char s[80];

    cout<<"请输入行数：";
    cin>>n;
    cin.get();
    char a[n][80];
    cout<<"请输入英文文章："<<endl;
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

    cout<<"英文字母:"<<character<<endl;
    cout<<"数字："<<num<<endl;
    cout<<"其他字符"<<other<<endl;

    system("pause");

    return 0;
}
