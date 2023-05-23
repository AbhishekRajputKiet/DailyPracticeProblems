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
void makecycle(node*&head,int d){
    node*temp=head;
    node*startingnode=temp;
    int c=0;
    while(temp->next!=NULL){
        if(c==d)
            startingnode=temp;
        temp=temp->next;
        c++;
    }
    temp->next=startingnode;
}
bool decectcycle(node*&head){
    node*slow=head;
    node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            return true;
    }
    return false;
}
void removecycle(node*&head){
    node*slow=head;
    node*fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}
int main(){
    node*head=new node(11);
    insertatHead(head,12);
    insertatHead(head,13);
    insertatHead(head,14);
    insertatHead(head,15);
    insertatHead(head,16);
    insertatHead(head,17);
    makecycle(head,3);
    cout<<decectcycle(head)<<endl;
    removecycle(head);
    cout<<decectcycle(head)<<endl;
    display(head);
    return 0;
} 
