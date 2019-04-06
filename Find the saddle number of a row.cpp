//File:寻找一个行列的鞍数.cpp
//在矩阵中，一个元素在所在行中是最大值，在所在列中是最小值，则被称为鞍点。m代表行，n代表列。
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int m,n,i,j,x,y,z,k,max,min;
    bool flag=true,what=false;
    cout<<"Please input m,n:";
    cin>>m>>n;

    int a[m][n];
    cout<<"Please input array:"<<endl;
    for (i=0;i<m;++i) {
      for (j=0;j<n;++j) {
       cin>>a[i][j];
      }
    }

    for (x=0;x<m;++x) {
      max=a[x][0];
      for (y=0;y<n;++y) {
       if (a[x][y]>max){
         max=a[x][y];
         }
       }
      y-=1;
      min=a[x][y];
      for (k=0;k<m;++k) {
       if (a[k][y]<=min-1) {
          flag=false;
       }
       else {
         continue;
         }
       }
       if (flag) {
        cout<<"mat["<<x<<"]["<<y<<"]="<<a[x][y]<<endl;
        what=true;
       }
     }
     if (!what) {
       cout<<"Not Found"<<endl;
     }



    system("pause");
    return 0;
}
