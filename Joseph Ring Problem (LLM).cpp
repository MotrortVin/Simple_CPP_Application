//求解约瑟夫环问题
#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{
    node *head,*p,*q;//head为链表头
    int n,i;

    //输入n
    cout<<"\ninput n:";   cin>>n;

    //建立链表
    head=p=new node;//创建第一个结点，head指向表头，p指向表尾
    p->data=1;
    for(i=1;i<n;++i)//构建单循环链表
    {
        q=new node;//q为当前正在创建的结点
        q->data=i+1;
        p->next=q;p=q;//将q链入表尾
    }
    p->next=head;

    //删除过程
    q=head;
    while(q->next!=q)
    {
        p=q->next;q=p->next;
        p->next=q->next;//绕过节点q
        cout<<q->data<<'\t';
        delete q;
        q=p->next;
    }

    //打印结果
    cout<<"\nThe last one is:"<<q->data<<endl;

    char c;
    cin>>c;

    return 0;
}
