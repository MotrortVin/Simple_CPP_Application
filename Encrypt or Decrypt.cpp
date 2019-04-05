//File£º×Ö·û´®µÄ¼ÓÃÜºÍ¸´Ô­.cpp
#include <iostream>
#include <string>

using namespace std;

char* Encrypt(char* A);
char* Decrypt(char* B);

int main()
{
    char a[31],b[31];
    char *A=a,*B=b;

    cout<<"Encrypt a string:";
    cin.getline(a,31);
    cout<<"Output:"<<Encrypt(A)<<endl;
    cout<<"Decrypt a string:";
    cin.getline(b,31);
    cout<<"Output:"<<Decrypt(B)<<endl;

    char c;
    cin>>c;
    return 0;
}

char* Encrypt(char* A)
{
    //¼ÓÃÜ×Ö·û´®¡£
    int k=0;
    for(int i=0;A[i]!='\0';++i){
        switch(k){
          case 0:if(A[i]+8<=122){A[i]=A[i]+8;}
                 else{A[i]=(A[i]+8)%123+33;}
                 break;
          case 1:if(A[i]+7<=122){A[i]=A[i]+7;}
                 else{A[i]=(A[i]+7)%123+33;}
                 break;
          case 2:if(A[i]+3<=122){A[i]=A[i]+3;}
                 else{A[i]=(A[i]+3)%123+33;}
                 break;
          case 3:if(A[i]+4<=122){A[i]=A[i]+4;}
                 else{A[i]=(A[i]+4)%123+33;}
                 break;
          case 4:if(A[i]+9<=122){A[i]=A[i]+9;}
                 else{A[i]=(A[i]+9)%123+33;}
                 break;
          case 5:if(A[i]+6<=122){A[i]=A[i]+6;}
                 else{A[i]=(A[i]+6)%123+33;}
                 break;
          case 6:if(A[i]+2<=122){A[i]=A[i]+2;}
                 else{A[i]=(A[i]+2)%123+33;}
                 break;
          case 7:if(A[i]+1<=122){A[i]=A[i]+1;}
                 else{A[i]=(A[i]+1)%123+33;}
                 break;
          case 8:break;
          case 9:if(A[i]+5<=122){A[i]=A[i]+5;}
                 else{A[i]=(A[i]+5)%123+33;}
                 break;
        }
        if(k<9){++k;}
        else {k=0;}
    }
    return A;
}

char* Decrypt(char* B)
{
    //¸´Ô­×Ö·û´®¡£
    int k=0;
    for(int i=0;B[i]!='\0';++i){
        switch(k){
          case 0:if(B[i]>40){B[i]=B[i]-8;}
                else{B[i]=B[i]+120-8;}
                break;
          case 1:if(B[i]>39){B[i]=B[i]-7;}
                else{B[i]=B[i]+120-7;}
                break;
          case 2:if(B[i]>35){B[i]=B[i]-3;}
                else{B[i]=B[i]+120-3;}
                break;
          case 3:if(B[i]>36){B[i]=B[i]-4;}
                else{B[i]=B[i]+120-4;}
                break;
          case 4:if(B[i]>41){B[i]=B[i]-9;}
                else{B[i]=B[i]+120-9;}
                break;
          case 5:if(B[i]>38){B[i]=B[i]-6;}
                else{B[i]=B[i]+120-6;}
                break;
          case 6:if(B[i]>34){B[i]=B[i]-2;}
                else{B[i]=B[i]+120-2;}
                break;
          case 7:if(B[i]>33){B[i]=B[i]-1;}
                else{B[i]=B[i]+120-1;}
                break;
          case 8:break;
          case 9:if(B[i]>37){B[i]=B[i]-5;}
                else{B[i]=B[i]+120-5;}
                break;
        }
        if(k<9){++k;}
        else {k=0;}
    }
    return B;
}

