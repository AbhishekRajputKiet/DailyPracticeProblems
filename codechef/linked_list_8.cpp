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
class linkedList{
    public:
    node*head;
    linkedList(){
        head=NULL;
    }
    node*reverse(node* head){
        
        node*curr=head;
        node*pre=NULL;
        node*next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
        }
        return pre;
    }
    void print(){
        node*temp=head;
        while(temp!=NULL){

            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void push(int data){
        node*temp=new node(data);
        temp->next=head;
        head=temp;
    }
};
int main(){
    linkedList ls;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ls.push(x);
    }
    cout<<"Given linked list is "<<endl;
    ls.print();

    ls.head=ls.reverse(ls.head);
    cout<<"\nAfter reverse : "<<endl;
    ls.print();
    cout<<endl;
    return 0;
}