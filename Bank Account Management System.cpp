#include <iostream>
#include <iomanip>

using namespace std;

struct DateT
{
    int Y,M,D;
};

class SavingAccount
{
friend void HelpPage();
friend void Add();
friend void Save();
friend void Withdraw();
friend void show_all();
friend void modifyinterest();
friend void afteramomth();

private:
    int No;
    DateT date;
    double Deposit;
    double interest;
public:
    void display()
    {
        cout.setf(ios::left);
        cout<<setw(10)<<No<<setw(15)<<Deposit<<setw(15)<<interest<<date.Y<<"-"<<date.M<<"-"<<date.D<<endl;
    }
    void newdeposit()
    {
        Deposit=Deposit+Deposit*interest;
    }
};
/*To tell the user how to use it.*/
void HelpPage();
/*Add a new member of the bank.*/
void Add();
/*To put money in an account.*/
void Save();
/*To take money from an account.*/
void Withdraw();
/*To show all of the information.*/
void show_all();
/*To modify the interest.*/
void modifyinterest();
/*After a month.*/
void afteramomth();
int n=0;
SavingAccount member[100],*sp;
int main()
{
    HelpPage();
    int x;
    bool flag=true;
    while(flag)
    {
        cout<<"Commend:";cin>>x;
        cout.setf(ios::left);
        switch(x)
        {
            case 1:Add();break;
            case 2:Save();break;
            case 3:Withdraw();break;
            case 4:show_all();break;
            case 5:modifyinterest();break;
            case 6:afteramomth();break;
            case 0:flag=false;break;
        }
        cout<<endl;
    }

    return 0;
}
/*To tell the user how to use it.*/
void HelpPage()
{
    cout<<"Welcome to C++ Banking System!"<<endl
        <<"Please select a function:"<<endl
        <<"0:Quit"<<endl
        <<"1:Create a new account"<<endl
        <<"2:Save"<<endl
        <<"3:Withdraw"<<endl
        <<"4:Show all"<<endl
        <<"5:Modify interest"<<endl
        <<"6:After a month"<<endl;
}
/*Add a new member of the bank.*/
void Add()
{
    member[n].No=n+1;
    cout<<"Please input the deposit:"; cin>>member[n].Deposit;
    cout<<"Please input the interest:"; cin>>member[n].interest;
    cout<<"Please input the date(Y M D):"; cin>>member[n].date.Y>>member[n].date.M>>member[n].date.D;
    cout<<"Created successfully!Your account number is:"<<n+1;
    n=n+1;
}
/*To put money in an account.*/
void Save()
{
    int i,j;
    double money;
    bool Found=false;
    cout<<"Please input the account number:"; cin>>i;
    for(j=0;j<n;++j)
    {
        if(member[j].No==i){Found=true;break;}
    }
    if(Found==false){cout<<"Not Found!"<<endl;return;}
    else
    {
        cout<<"Please input the amount:"; cin>>money;
        member[j].Deposit=member[i].Deposit+money;
        cout<<"Please input the date(Y M D):"; cin>>member[j].date.Y>>member[j].date.M>>member[j].date.D;
    }
}
/*To take money from an account.*/
void Withdraw()
{
    int i,j;
    double money;
    bool Found=false;
    cout<<"Please input the account number:"; cin>>i;
    for(j=0;j<n;++j)
    {
        if(member[j].No==i){Found=true;break;}
    }
    if(!Found){cout<<"Not Found!"<<endl;return;}
    else
    {
        cout<<"Please input the amount:"; cin>>money;
        member[j].Deposit=member[j].Deposit-money;
        cout<<"Please input the date(Y M D):"; cin>>member[j].date.Y>>member[j].date.M>>member[j].date.D;
    }
}
/*To show all of the information.*/
void show_all()
{
    cout<<setw(10)<<"No."<<setw(15)<<"Deposit"<<setw(15)<<"Interest"<<setw(20)<<"Date"<<endl;
    for(int i=0;i<n;++i)
    {
        member[i].display();
    }
}
/*To modify the interest.*/
void modifyinterest()
{
    int i,num;
    bool Found=false;
    cout<<"Please input the account number:";
    cin>>num;
    for(i=0;i<n;++i)
    {
        if(member[i].No==num)
        {
            Found=true;
            break;
        }
    }
    if(!Found){cout<<"Not Found!"<<endl;return;}
    else
    {
        cout<<"Please input the interest:"; cin>>member[i].interest;
    }
}
/*After a month.*/
void afteramomth()
{
    for(int i=0;i<n;++i)
    {
        member[i].newdeposit();
    }
    show_all();
}
