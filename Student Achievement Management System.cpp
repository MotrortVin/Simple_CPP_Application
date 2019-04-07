//�ɼ�����ϵͳ.cpp
//��ӭʹ�óɼ�����ϵͳ!
/*
       ����˵����
       ���ѧ����Ϣ�ĸ�ʽ�ǣ�ѧ�� ���� ��ѧ Ӣ�� ����(һ�����ֻ��һ��)
	   ��ʾѧ����Ϣ�ĸ�ʽ�ǣ�ѧ�� ���� ��ѧ Ӣ�� ���� �ܷ� ƽ����
	   �޸�ѧ����Ϣ�ĸ�ʽ�ǣ�ѧ�� �޸���Ŀ �޸Ľ����һ��ֻ���޸�һ����Ŀ��
	   �޸���Ŀ�����Ʒֱ�Ϊ��SNo Name Math Eng Phy
	   ����ʾ����
	   Command: 1
	   1 Jack 120 130 80
	   Command: 1
	   2 Bob 110 140 80
	   Command: 2
	   1 Name Joe
	   Command: 2
	   2 Math 140
	   Command: 3
	   1 Joe 120 130 80 330 110
	   2 Bob 140 140 80 360 120
	   Command: 4
	   1
	   1 Joe 120 130 80 330 110
	   Command: 5
	   Bob
	   2 Bob 140 140 80 360 120
	   Command: 4
	   3
	   Not Found
	   Command: 5
	   Amy
	   Not Found
	   Command: 6
	   1 Joe 120 130 80 330 110
	   2 Bob 140 140 80 360 120
	   Command: 7
	   2 Bob 140 140 80 360 120
	   1 Joe 120 130 80 330 110
	   Command: 0
	   Exit
*/
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

struct studentT
{
    int number;
    string name;
    int math;
    int English;
    int physics;
    int total;
};
/*�鿴�˵�*/
void help();
/*���ѧ����Ϣ*/
void Addinformation();
/*�޸�ѧ����Ϣ*/
void Changeinformation();
/*��ʾȫ��ѧ����Ϣ*/
void Showinformation();
/*��ѧ�Ų���ѧ����Ϣ*/
void searchbynumber();
/*����������ѧ����Ϣ*/
void searchbyname();
/*��ѧ����������*/
void putinorder1();
/*���ֽܷ�������*/
void putinorder2();
/*��ӡ���*/
void print(studentT *s);

studentT student[100],*sp;//�ٶ�������100���ˣ�����������ǵø����
int n=0;

int main()
{
    /*Look at the help page.*/
    help();
    /*Input what user need to do.*/
    int x;
    bool flag=true;
    while(flag)
    {
        cout<<"Commend:";cin>>x;
        cout.setf(ios::left);
        switch(x)
        {
            case 1:Addinformation();break;
            case 2:Changeinformation();break;
            case 3:Showinformation();break;
            case 4:searchbynumber();break;
            case 5:searchbyname();break;
            case 6:putinorder1();break;
            case 7:putinorder2();break;
            case 0:flag=false;break;
        }
    }
    return 0;
}

/*�鿴�˵�*/
void help()
{
    char s;
    cout<<"Do you want to read the help page?('y'?)";
    cin>>s;
    if(s=='y')
    {
        cout<<"Welcome to the system!"<<endl;
        cout<<"1---Add a student's information"<<endl;
        cout<<"2---change a student's information"<<endl;
        cout<<"3---Print students' information"<<endl;
        cout<<"4---Use the student's number to search"<<endl;
        cout<<"5---Use the student's name to search"<<endl;
        cout<<"6---Sort data(students' number)"<<endl;
        cout<<"7---Sort data(students' total points)"<<endl;
        cout<<"0---Exit"<<endl;
    }
}
/*���ѧ����Ϣ*/
void Addinformation()
{
    sp=&student[n];
    cin>>(*sp).number>>(*sp).name>>(*sp).math>>(*sp).English>>(*sp).physics;
    (*sp).total=(*sp).math+(*sp).English+(*sp).physics;
    ++n;
}
/*�޸�ѧ����Ϣ*/
void Changeinformation()
{
    int num,k;
    string section;
    string change;
    bool a=true;
    cin>>num>>section>>change;
    for(int i=0;i<n;++i)
    {
        if(num==student[i].number)
        {
            sp=&student[i];
            a=false;
            break;
        };
    };
    if(a)
    {
        cout<<"The number is no found!"<<endl;
    }
    else
    {
        if(section=="Name")(*sp).name=change;
        else if(section=="SNo")(*sp).number=atoi(change.c_str());
        else if(section=="Math")(*sp).math=atoi(change.c_str());
        else if(section=="Eng")(*sp).English=atoi(change.c_str());
        else if(section=="Phy")(*sp).physics=atoi(change.c_str());
        else cout<<"Wrong input!"<<endl;
    };
}
/*��ʾȫ��ѧ����Ϣ*/
void Showinformation()
{
    cout<<setw(10)<<"Number:"<<setw(20)<<"Name:"<<setw(10)<<"Math:"<<setw(10)<<"English:"<<setw(10)<<"Physics:"<<endl;
    for(int i=0;i<n;++i)
    {
        sp=&student[i];
        print(sp);
    }
}
/*��ѧ�Ų���ѧ����Ϣ*/
void searchbynumber()
{
    int num;
    cin>>num;
    bool a=true;
    for(int i=0;i<n;++i)
    {
        if(num==student[i].number)
        {
            sp=&student[i];
            a=false;
            break;
        };
    };
    if(a) cout<<"No found!"<<endl;
    else
    {
        cout<<setw(10)<<"Number:"<<setw(20)<<"Name:"<<setw(10)<<"Math:"<<setw(10)<<"English:"<<setw(10)<<"Physics:"<<endl;
        print(sp);
    }
}
/*����������ѧ����Ϣ*/
void searchbyname()
{
    string nam;
    cin>>nam;
    bool a=true;
    for(int i=0;i<n;++i)
    {
        if(nam==student[i].name)
        {
            sp=&student[i];
            a=false;
            break;
        };
    };
    if(a) cout<<"No found!"<<endl;
    else
    {
        cout<<setw(10)<<"Number:"<<setw(20)<<"Name:"<<setw(10)<<"Math:"<<setw(10)<<"English:"<<setw(10)<<"Physics:"<<endl;
        print(sp);
    }
}
/*��ѧ����������*/
void putinorder1()
{
    int u1,u2;
    studentT blank;
    bool flag;
    for(u1=1;u1<n+1;++u1)
    {
        flag=false;
        for(u2=0;u2<n-u1;++u2)
            if(student[u2+1].number<student[u2].number)
            {
                blank=student[u2];
                student[u2]=student[u2+1];
                student[u2+1]=blank;
                flag=true;
            }
        if(!flag) break;
    }
    cout<<setw(10)<<"Number:"<<setw(20)<<"Name:"<<setw(10)<<"Math:"<<setw(10)<<"English:"<<setw(10)<<"Physics:"<<endl;
    for(int i=0;i<n;++i)
    {
        sp=&student[i];
        print(sp);
    }
}
/*���ֽܷ�������*/
void putinorder2()
{
    int u1,u2;
    studentT blank;
    bool flag;
    for(u1=1;u1<n+1;++u1)
    {
        flag=false;
        for(u2=0;u2<n-u1;++u2)
            if(student[u2+1].total>student[u2].total)
            {
                blank=student[u2];
                student[u2]=student[u2+1];
                student[u2+1]=blank;
                flag=true;
            }
        if(!flag) break;
    }
    cout<<setw(10)<<"Number:"<<setw(20)<<"Name:"<<setw(10)<<"Math:"<<setw(10)<<"English:"<<setw(10)<<"Physics:"<<endl;
    for(int i=0;i<n;++i)
    {
        sp=&student[i];
        print(sp);
    }
}
/*��ӡ���*/
void print(studentT *s)
{
    cout<<setw(10)<<(*s).number<<setw(20)
        <<(*s).name<<setw(10)<<(*s).math<<setw(10)
        <<(*s).English<<setw(10)<<(*s).physics<<endl;
}
