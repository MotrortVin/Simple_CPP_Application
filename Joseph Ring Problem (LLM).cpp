//���Լɪ������
#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{
    node *head,*p,*q;//headΪ����ͷ
    int n,i;

    //����n
    cout<<"\ninput n:";   cin>>n;

    //��������
    head=p=new node;//������һ����㣬headָ���ͷ��pָ���β
    p->data=1;
    for(i=1;i<n;++i)//������ѭ������
    {
        q=new node;//qΪ��ǰ���ڴ����Ľ��
        q->data=i+1;
        p->next=q;p=q;//��q�����β
    }
    p->next=head;

    //ɾ������
    q=head;
    while(q->next!=q)
    {
        p=q->next;q=p->next;
        p->next=q->next;//�ƹ��ڵ�q
        cout<<q->data<<'\t';
        delete q;
        q=p->next;
    }

    //��ӡ���
    cout<<"\nThe last one is:"<<q->data<<endl;

    char c;
    cin>>c;

    return 0;
}
