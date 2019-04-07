#include<iostream>

using namespace std;

int main()
{
    int fahr,celsius;

    cout<<"请输入华氏温度：";
    cin>>fahr;

    celsius=5*(fahr-32)/9;

    cout<<"对应的摄氏温度为："<<celsius<<endl;

    return 0;
}
