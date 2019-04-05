//File:Delete a short string from along string.cpp
//We use it to C
#include <iostream>
#include <cstring>

using namespace std;
int i=0,j=0,x,k;
/*To delete a short string from along string.*/
void deletechar(char *str1,const char *str2);
/*Find the short string from the long string*/

int main()
{
    /*Input the string and the pattern*/
    char p1[100];
    char p2[100];
    cout<<"Please input a string: ";
    cin.getline(p1,100,'\n');
    cout<<"Please input a pattern: ";
    cin.getline(p2,100,'\n');
    /*To delete a short string from along string.*/
    deletechar(p1,p2);
    cout<<p1;

    char c;
    cin>>c;
    return 0;
}

/*To delete a short string from along string.*/
void deletechar(char *str1,const char *str2)
{
    char *p;
    int i;
    /*find the position of the short string.*/
    p=strstr(str1, str2);
    if(p==NULL) return;
    /*Delete the short string from the long string.*/
    for(i=strlen(str2); p[i]!='\0'; i++)
    {
        p[i-strlen(str2)] = p[i];
    }
    p[i-strlen(str2)] = '\0';
    /*Do it again.*/
    deletechar(str1, str2);
}


