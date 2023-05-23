#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertatHead(node*&head,int d){
    node*temp=new node(d);
    temp->next=head;
    head=temp;
}
void display(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
node* reverse(node*head,int k){
    node*prev=NULL;
    node*curr=head;
    node*nextptr;
    int c=0;
    while(curr!=NULL && c<k){
        nextptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
        c++;
    }
    if(nextptr!=NULL)
        head->next=reverse(nextptr,k);
    return prev;
}
int main(){
    node*head=new node(11);
    insertatHead(head,12);
    insertatHead(head,13);
    insertatHead(head,14);
    insertatHead(head,15);
    insertatHead(head,16);
    insertatHead(head,17);
    display(reverse(head,2));
    return 0;
}