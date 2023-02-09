#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        this->next=NULL;
    }
};
void insertatHead(node* &head,int val){
    node*temp=new node(val);
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
bool search(node*head,int key){
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==key)
            return true;
        temp=temp->next;
    }
    return false;
}
void deletion(node*&head,int val){
    node*temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
node* reverse(node*&head){
    node*curr=head;
    node*prev=NULL;
    node*nextptr;
    while(curr!=NULL){
        nextptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
    }
    return prev;
}
node* reverseRecursive(node*&head){
    if(head==NULL || head->next==NULL)
        return head;
    node*newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
int main(){
    node*head=new node(11);
    insertatHead(head,12);
    insertatHead(head,13);
    insertatHead(head,14);
    insertatHead(head,15);
    //deletion(head,12);
    //display(head);
    // cout<<"\n"<<search(head,11);
    node*newptr=reverseRecursive(head);
    display(newptr);

    return 0;
}