#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node*next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
int isEvenOrOdd(node*head){
    int count=0;
    node*temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    if(count %2==0)
        return 0;
    else    
        return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,data;
        cin>>n;
        node*head,*tail;
        cin>>data;
        head=new node(data);
        tail=head;
        for(int i=0;i<n-1;i++){
            cin>>data;
            tail->next=new node(data);
            tail=tail->next;
        }
        if(isEvenOrOdd(head)==0){
            cout<<"Even"<<endl;
        }
        else
            cout<<"Odd"<<endl;
    }
    return 0;
}