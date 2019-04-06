//在数组中查找特定元素是否存在.cpp
//输入一个正整数n，然后再输入n个整数存入数组arr中，接着输入key，在arr中查找key是否存在。
#include <iostream>

using namespace std;

int search(int arr[],int n,int key);

int main()
{
    int n,key,result;

    cout<<"Please input n:";
    cin>>n;

    int arr[n+1];

    //输入数组
    cout<<"Please input "<<n<<" integers:";
    for(int i=0;i<n;++i){
      cin>>arr[i];
    }
    cout<<"Please input key:";
    cin>>key;

    //分析结果，并输出
    result=search(arr,n,key);
    if(result==-1) cout<<"Not Found";
    else cout<<"Index:"<<search(arr,n,key)<<endl;
    //用于停留；
    char c;
    cin>>c;

    return 0;
}

int search(int arr[],int n,int key)
{
    //定义指针
    int *p,a=-1;
    p=arr;
    //检测目标数字是否存在
    for(int i=0;i<n;++i){
      if(*p==key){
        a=i;
        break;
      }
      else ++p;
    }
return a;
}
