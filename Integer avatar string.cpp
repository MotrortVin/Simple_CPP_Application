//File:change an integer into a string.cpp
//This one is used to change an integer into a string.
#include <iostream>

using namespace std;

/*To change an integer into a string.*/
char *itos(int n);

int main()
{
   /*Input an integer.*/
   int num;
   cin>>num;
   /*change it into a string.*/
   char *str;
   str=itos(num);
   for(int i=0;str[i]!='\0';++i)
   {
       cout<<str[i];
   }

   char c;
   cin>>c;

   return 0;
}

/*To change an integer into a string.*/
char *itos(int n)
{
    /*Used to determine how many digits it is.*/
    int i,c(1000000000);
    char str[11];
    char *p=&str[0];
    while(n/c==0){
        c=c/10;
    }
    /*To change an integer into a string.*/
    for(i=0;c>=1;++i)
    {
        str[i]=n/c+'0';
        n=n%c;
        c=c/10;
    }
    /*Avoid the wrong string.*/
    str[i]='\0';
    return p;
}
