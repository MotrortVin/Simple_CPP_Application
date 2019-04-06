#include <iostream>

using namespace std;

struct node
{
    int num;
    node *next;
};

int main()
{
    int n,i;
    cout<<"\nPlease input n:";cin>>n;
    node *head,*p,*rear;
    head=rear=new node;
    rear->num=1;
    for(i=1;i<n;++i)
    {
        p=new node;
        p->num=i+1;
        rear->next=p;
        rear=p;
    }
    rear->next=head;

    p=head;
    while(p->next!=p)
    {
        rear=p->next;p=rear->next;
        rear->next=p->next;
        cout<<p->num<<'\t';
        delete p;
        p=rear->next;
    }

    cout<<"\n"<<rear->num<<endl;
    return 0;
}
