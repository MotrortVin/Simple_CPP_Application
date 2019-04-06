#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,k,i,j;

    cout<<"请输入灯数n，以及人数k：";
    cin>>n>>k;

    int a[n];

    for (i=0;i<n;++i) {
        a[i]=i+1;
    }
    for (j=2;j<k+1;++j) {
        for (i=0;i<n;++i) {
            if (a[i]%j==0) {
              a[i]=a[i]*(-1);
            }
        }
    }
    for (i=0;i<n;++i) {
        if (a[i]>0) cout<<a[i]<<" ";
    }

    system ("pause");
    return 0;
}
