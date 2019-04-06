#include <iostream>
#include <cstring>

using namespace std;

/*To output the string.*/
void Input_the_string(char str[],int a);
void swap(char str[],int a,int i);
int k;

int main()
{
    /*Input n.*/
    int n;
    cout<<"Please input n:";
    cin>>n;k=n;
    /*Identify a string of numbers from 1 to n.*/
    char num[n+1];
    for(int i=0;i<n;i++)
    {
        num[i]=i+1+'0';
    }
    num[n]='\0';
    /*Do the looping.*/
    Input_the_string(num,0);
    return 0;
}

void Input_the_string(char str[],int a)
{
    int i;

    if(a==strlen(str)-1) cout<<str<<endl;
    else for(i=a;i<strlen(str);++i){
       swap(str,a,i);
       Input_the_string(str,a+1);
       swap(str,a,i);
    }
}

void swap(char str[],int a,int i)
{
    int t;

    t=str[a];
    str[a]=str[i];
    str[i]=t;
}
