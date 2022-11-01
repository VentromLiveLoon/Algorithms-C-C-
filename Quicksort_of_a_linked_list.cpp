#include"stdio.h"
#include"stdlib.h"
#include"time.h"

#define RIGHT 1
#define LEFT 0
// 链表说明
struct Link
{
    int data;
    struct Link * next;
};
typedef struct Link LINK;
// 创建链表
struct Link *LinkInsert(struct Link *head,int num)
{
    if(head==nullptr)
    {
        head=new struct Link;
        head->data=num;
        head->next=nullptr;
        
    }
    else
    
    {
        struct Link *p;
        p=head;
        head=new struct Link;
        head->data=num;
        head->next=p;

       
        
    }
    return head;
}
// 打印链表
void LinkPrint(struct Link *head)
{
    while(head)
    {
        printf("%d\t",head->data);
        head=head->next;
    }
    printf("\n");
}
// 释放链表
void LinkFree(struct Link *head)
{
    struct Link *p;
    while (head)
    {
        p=head;
        head=head->next;
        delete p ;

    }
    
}
// 交换节点数值
void Exchange(LINK *a,LINK *b)
{
    int temp;
    temp=a->data;
    a->data=b->data;
    b->data=temp;
}
// 快速排序
void QuicklySort(LINK *L,LINK *R)
{
    // 当只有一个节点的时候直接结束
    if(L==R || L->next==R)
    {
        return;
    }
    // 中心节点指针
    LINK *P = L;
    // i，j，的前面的节点指针
    LINK *pi,*pj;
    pi=pj=L;
    // 慢针和快针指针。
    LINK *i=pi->next;
    LINK *j=pj->next;

    // 判断j是否到达了链表的结尾
    while (j!=R)
    {
        // 如果j节点的数值比P的数值小
        if(j->data<P->data)
        {
            // i节点和j节点交换
            Exchange(i,j);
            // pi跟上i
            pi=i;
            // i指向下一个节点
            i=i->next;
        }
        // pj跟上j
        pj=j;
        // j指向下一个节点
        j=j->next;

    }
    // 交换pi和P
    Exchange(pi,P);
    // 对L到pi进行快速排序
    QuicklySort(L,pi);
    // 对i到R进行快速排序。
    QuicklySort(i,R);

}
// 随机生成一个链表
LINK *getLinks(LINK *head,long ASIZE,int Maxnum)
{
    srand(time(NULL));
    for(long i=0;i<ASIZE;i++)
    {
        head=LinkInsert(head,rand()%Maxnum);
    }
    return head;
}
// 主函数
int main()
{
    struct Link *head ;
    head=nullptr;

    // insert the node 
    // 得到一个链表
    head=getLinks(head,50,30);

    // print links 
    // LinkPrint(head);


//  sorting
//  开始使用快速排序
    QuicklySort(head,nullptr);
    // print links 

    // 打印链表
    LinkPrint(head);


    // free the links 
    // 释放链表
    LinkFree(head);
    return 0;
}
