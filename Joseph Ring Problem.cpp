//File��Լɪ������.cpp
//Լɪ�����⣺n����Χ��һȦ����˳���1��n��š��ӵ�һ���˿�ʼ����1��2��3������3���˳�Ȧ�ӣ���һ���˴�1��ʼ��������������������Ǹ��˵ı�š�
#include <iostream>

using namespace std;

int Last(int n);

int main()
{
    int n,r;
    //��ʼ�����顣
    cout<<"Please input n:";
    cin>>n;
    //���к�������������
    cout<<"Last code:"<<Last(n)+1<<endl;

    char c;
    cin>>c;
    return 0;
}

int Last(int n)
{
    //��������ʼ����
    int k=0,i=0,a=0,*p;
    int s[2000];//��n̫�󣬵��������ڴ治��ʱ�������ʵ��Ŵ�˴�����ֵ��
    p=&s[0];
    //�����ʼ����
    for(int i=0;i<n;++i){
        s[i]=i;
    }
    //�������в�����Ҫ�������ȥ���󣬽������鸴�������
    do{
        if(a!=2){//����Ǳ����������ֵ����˳��Ļ����޸Ĵ˴��������ͺá�
            p[n+k]=p[i];
            ++k;
            ++a;
        }
        else{
            a=0;
        }
        ++i;
    }while(n+k!=i);
    return s[n+k-1];
}
