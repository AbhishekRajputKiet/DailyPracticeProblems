#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAttail(Node* &tail,int d){
    Node*temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
void print(Node*head){
    Node*temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
bool search(Node* head,int key){
    Node*temp=head;
    while(temp != NULL){
        if(temp->data==key)
            return false;
        temp=temp->next;
    }
    return true;
}
int main(){
    Node*node1=new Node(10);
    Node*tail=node1;
    Node*head=node1;
    print (head);
    insertAttail(tail,12);
    print(head);
    insertAttail(tail,15);
    print(head);
    insertAttail(tail,18);
    print(head);   
    cout<<search(head,118)<<endl;
    return 0;
}