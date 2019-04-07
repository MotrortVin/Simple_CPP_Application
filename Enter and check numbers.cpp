//输入并检查数字.cpp
//请输入一个大于等于10并且小于等于30的整数。
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    float a;
    float getNumber(float);

    cout<<getNumber(a)<<endl;

    system("pause");

    return 0;
}

float getNumber(float a)
{
    while(1){
        cout<<"请输入一个大于等于10并且小于等于30的正整数：";
        cin>>a;
        if (a-int(a)==0){//确保它是整数
            if(a>=10&&a<=30){//确保它的范围大小
                break;
            }
        }
    }
    return a;
}
