#include<bits/stdc++.h>
using namespace std;
struct node
{
      int data;
      struct node *next;
};
void TraverseNode(struct node *head)
{
      while(head!=NULL)
      {
            cout<<"Element:"<<head->data<<endl;
            head=head->next;
      }
}
struct node *InsertNodeSpecificPosition(struct node *p,int value,int position)
{
      int i=0;
      struct node *ptr=NULL,*head=NULL;
      ptr=(struct node *)malloc(sizeof(struct node));
      head=(struct node *)malloc(sizeof(struct node));
      ptr=p;
      while(i!=position-1)
      {
            ptr=ptr->next;
            i++;
      }
      head->next=ptr->next;
      head->data=value;
      ptr->next=head;
      return ptr;
};
int main()
{
       struct node *head=NULL,*first=NULL,*second=NULL,*third=NULL;
       //Dynamic Memory Allocate
       head=(struct node *)malloc(sizeof(struct node));
       first=(struct node *)malloc(sizeof(struct node));
       second=(struct node *)malloc(sizeof(struct node));
       third=(struct node *)malloc(sizeof(struct node));
       //Assign value and Creat link
       head->data=10;
       head->next=first;
       first->data=20;
       first->next=second;
       second->data=30;
       second->next=third;
       third->data=40;
       third->next=NULL;
       //Traverse Node Before Insert New Node
       cout<<"Traverse Node Before Insert New Node:"<<endl;
       TraverseNode(head);
       //Insert Node at Specific Position
       head=InsertNodeSpecificPosition(head,60,0);
       cout<<"Traverse Node insert at Specific Position:"<<endl;
       TraverseNode(head);
}
