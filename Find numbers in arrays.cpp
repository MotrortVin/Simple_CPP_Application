//�������в����ض�Ԫ���Ƿ����.cpp
//����һ��������n��Ȼ��������n��������������arr�У���������key����arr�в���key�Ƿ���ڡ�
#include <iostream>

using namespace std;

int search(int arr[],int n,int key);

int main()
{
    int n,key,result;

    cout<<"Please input n:";
    cin>>n;

    int arr[n+1];

    //��������
    cout<<"Please input "<<n<<" integers:";
    for(int i=0;i<n;++i){
      cin>>arr[i];
    }
    cout<<"Please input key:";
    cin>>key;

    //��������������
    result=search(arr,n,key);
    if(result==-1) cout<<"Not Found";
    else cout<<"Index:"<<search(arr,n,key)<<endl;
    //����ͣ����
    char c;
    cin>>c;

    return 0;
}

int search(int arr[],int n,int key)
{
    //����ָ��
    int *p,a=-1;
    p=arr;
    //���Ŀ�������Ƿ����
    for(int i=0;i<n;++i){
      if(*p==key){
        a=i;
        break;
      }
      else ++p;
    }
return a;
}
