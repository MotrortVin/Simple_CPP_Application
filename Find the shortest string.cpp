#include <iostream>

using namespace std;

//To find the shortest string
int minlen(char *str[],int n);
int main()
{
    //Input a number
    int n;
    cout<<"Please input the number of strings:";
    cin>>n;
    cin.get();
    char *str[n];
    for(int i=0;i<n;++i)
    {
        str[i]=new char[101];
        cin.getline(str[i],101,'\n');
    }
    cout<<minlen(str,n)<<endl;

    char c;
    cin>>c;
    return 0;
}

int minlen(char *str[],int n)
{
    int x,y=100;

    for(int i=0;i<n;++i)
    {
        for(int j=0;str[i][j]!='\0';++j){
           x=j+1;
        }
        if(x<y) y=x;
    }
    return y;
}
