//Julian���귨��ת��.cpp
//Julian���귨�����꼰��һ���еĵڼ�������ʾ���ڡ�
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char* Julian(int year,int date);

int main()
{
    int year,date;

    cout<<"Input Julian��please input like (year date )��:";//��Ԫǰ�ø��ű�ʾ����������������ˣ�
    cin>>year>>date;
    cout<<"Output:"<<Julian(year,date)<<endl;

    char c;
    cin>>c;
    return 0;
}

char* Julian(int year,int date)
{
    int i,k,l,u;
    string str1="    ",str2="  ";
    char *p;
    //��Ԫǰ���Ϊһ�塣
    if(year<0){
        year=-year+3;
    }
    //�ж��Ƿ�Ϊ���ꡣ
    if(year%4==0){
        if(year%100==0){
             if(year%400==0) l=1;
             else l=0;
        }
        else l=1;
    }
    //�����ڽ��м�⣬�����Ƿ�ϸ�
    if(l==0){
        if(date<=365) k=1;
        else k=0;
    }
    else{
        if(date<=366) k=1;
        else k=0;
    }
    //��ʼ����ת����
    if(k==0) str1="NULL";
    else{
        for(i=1;i<=12;++i){
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
                if(date<=31) break;
                else date-=31;
            }
            else if(i==2){
                     if(l==0){
                         if(date<=28) break;
                         else date-=28;
                     }
                     else{
                         if(date<=29) break;
                         else date-=29;
                     }
                 }
                 else{
                     if(date<=30) break;
                     else date-=30;
                 }
        }
    //������롣
        switch(i){
           case 1:str1="Jan ";break;
           case 2:str1="Feb ";break;
           case 3:str1="Mar ";break;
           case 4:str1="Apr ";break;
           case 5:str1="May ";break;
           case 6:str1="Jun ";break;
           case 7:str1="Jul ";break;
           case 8:str1="Aug ";break;
           case 9:str1="Sept ";break;
           case 10:str1="Oct ";break;
           case 11:str1="Nov ";break;
           case 12:str1="Dec ";break;
        }
        u=date/10;
        if(u!=0){
                str2[0]=u+'0';
        }
        else{
                str2[0]=' ';
        }
        str2[1]=date%10+'0';

        str1=str1+str2;
    }
//string��char*��ת����
    int len=str1.length();
    p=(char*)malloc((len+1)*sizeof(char));
    str1.copy(p,len,0);

    return p;
}




