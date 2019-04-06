//该文件用于去掉空格。
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    char str[81];
    int i=0,j;

    cout<<"Please input a string:";
    cin.getline(str,81);

    while (str[i]!='\0') {
        if (str[i]==' ') {
            j=i;
            while (str[j]!='\0') {
                str[j]=str[j+1];
                j++;
            }
        }
        else
            i++;
    }

    cout<<str<<endl;

    system("pause");
    return 0;
}
