#include <iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main()
{
    char c;
    int n,n2=0;
    string str[1000],str2[1000];
    int num[1000];
    for (int i=0;i<1000;++i)
      num[i]=0;//初始化计数器
    for (int i=0;i<1000;++i)
    {
      while(1)
      {
        c=cin.get();
        if((c>=97&&c<=122)||c==45||c==39)
        str[i]=str[i]+c;
        if(c>=65&&c<=90)
          {
            c=c+32;
            str[i]=str[i]+c;
          }
        if(c<39||(c>39&&c<45)||(c>45&&c<65)||c>122||(c>90&&c<97))
        break;
       }
    }//将数据按单词形式导入数组，并把所有大写转化为小写
      for(int i=0;i<1000;++i)
      {
          if(str[i]!=" ")
          {
              num[i]=1;
              str2[i]=str[i];
              for(int j=i+1;j<1000;++j)
                  if(str[i]==str[j])
                  {
                      str[j]=" ";
                      num[i]++;
                  }
          }
          else continue;
      }//统计单词个数并将不同的单词存进str2
    n=strlen(str2[0].c_str());
    for(int i=1;i<1000;++i)
        if(int(strlen(str2[i].c_str()))>n)
           n=strlen(str2[i].c_str());//找出最长的单词长度
    for(int i=0;i<1000;++i)
       if(strlen(str2[i].c_str())!=0)
       {
           n2++;
           if(str2[i]=="i")
              str2[i]="I";
           if(str2[i]=="i'm")
              str2[i]="I'm";//转化列外情况
           cout<<left<<setw(n+2)<<str2[i]<<setw(5)<<num[i];
           if(n2>4)
           {
             cout<<endl;
             n2=0;
           }//按表格形式输出
       }
    return 0;
}

//2016-10-18
