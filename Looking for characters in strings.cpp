//File:search an character from a string.cpp
/*We use it to search a character from a string, and then output the string after the last one of this character.*/
#include <iostream>

/*To return the position of the last one of the character.*/
char *mystrrchr(char *str,char ch);

using namespace std;

int main()
{
    /*To identify the string and its point and the character that we need to find.*/
    char s[100];
    char *str;
    char k;

    /*Input the string.*/
    cout<<"Please input a string:";
    cin.getline(s,100,'\n');
    str=&s[0];
    /*Input the character.*/
    cout<<"Please input a char:";
    cin>>k;
    /*Get the position of the character.*/
    if(mystrrchr(str,k)){
            /*Output the new string.*/
            for(str=mystrrchr(str,k);*str!='\0';++str)
            {
                cout<<*str;
            }
    }
    else cout<<"Not Found";

    char c;
    cin>>c;
    return 0;
}

/*To return the position of the last one of the character.*/
char *mystrrchr(char *str,char ch)
{
    /*Identify the counter and a new point.*/
    int coun=-1;
    char *p=str;
    /*Search the character.*/
    for(int i=0;*p!='\0';++i)
    {
        if(*p==ch){
                coun=i;
                str=p;
        }
        ++p;
    }
    /*Return the result.*/
    if(coun>=0) return str;
    else return NULL;
}
