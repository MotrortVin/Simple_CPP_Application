//File:�������־�����.cpp
//����һ��������n��Ȼ��������n������������������������
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,i,k,x,y,z;

    cout<<"Please input n:";
    cin>>n;

    int a[n];

    cout<<"Please input "<<n<<" integers:";
    for (i=0;i<n;++i){
      cin>>a[i];
    }

    bool flag;

    for (i=1;i<n+1;++i){
      flag=false;
      for(k=0;k<n-i;++k)
       if (a[k+1]>a[k]) {
         y=a[k];
         a[k]=a[k+1];
         a[k+1]=y;
         flag=true;
       }

      if (!flag) break;
    }

    cout<<"Sorted sequence:";
    for (i=0;i<n;++i) {cout<<a[i]<<" ";}

    system("pause");
    return 0;
}
