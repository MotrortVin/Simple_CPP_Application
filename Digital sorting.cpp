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

    for (y=0;y<n;++y) {
      for (k=y+1;k<n;++k) {
        if (a[k]<a[y]) {
        z=a[y];
        a[y]=a[k];
        a[k]=z;
        }
      }
     }

    cout<<"Sorted sequence:";
    for (i=0;i<n;++i) cout<<a[i]<<" ";

    system("pause");
    return 0;
}
