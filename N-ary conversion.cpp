//����ת��.cpp
//��ʮ���Ƶ���ת��Ϊ������ƣ����ڵ���2��С�ڵ���16��
#include <iostream>
#include <stdlib.h>

using namespace std;

char printInt(int n,int base);

int main()
{
    int n,base;
    cout<<"Please input n,base(n����):";
    cin>>n>>base;//�������

    printInt(n,base);//���к���

    system("pause");

    return 0;
}

char printInt(int n,int base)
{
    int a=1,i=0,x=base,j;
    char s[1000];//���帨���ַ���
    while(base!=0){//��kȡ�෨
        a=base%n;
        if(a<=9){
            s[i]=a+'0';
        }
        else{
            s[i]=a+55;
        }
        base=base/n;
        j=i;
        ++i;
    }//�Ȱ����ݵ������ڸ����ַ�����
    char f[100];
    for(int i=0;i<=j;i++){
        f[i]=s[j-i];
    }//������ŵ�Ŀ���ַ�����
    cout<<x<<"(10)="<<f<<"("<<n<<")"<<endl;

    return 0;
}
