//File:班级通讯录.cpp
#include <iostream>

using namespace std;

struct dateT
{
    int year;
    int month;
    int day;
};

struct studentT
{
    char name[20];
    char address[50];
    dateT birthday;
    char number[11];
};

int main()
{
    /*Input how many are the students*/
    int n;
    cout<<"Please input n(n<10):";
    cin>>n;
    /*Input the information of all of the students.*/
    studentT student[n],*sp;
    for(int i=0;i<n;++i)
    {
        sp=&student[i];
        cin>>(*sp).name>>(*sp).birthday.year
        >>(*sp).birthday.month>>(*sp).birthday.day
        >>(*sp).number;
        cin.get();
        cin.getline((*sp).address,50);
    }
    for(int j=0;j<n;++j)
    {
        sp=&student[j];
        cout<<(*sp).name<<" "<<(*sp).birthday.year<<"/"
        <<(*sp).birthday.month<<"/"<<(*sp).birthday.day
        <<" "<<(*sp).number<<" "<<(*sp).address<<endl;
    }
    return 0;
}
