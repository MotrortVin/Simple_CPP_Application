//File:输入数字就排序.cpp
//输入一个正整数n，然后再输入n个整数，将它们排序后输出。
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
