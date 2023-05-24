#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void position(node*head,node*tail,int pos){
    if(pos==0)
        return ;
    node* walk=head;
    for(int i=1;i<pos;i++){
        walk=walk->next;
    }
    tail->next=walk;
}
class solution{
    public:
    bool isCyclepresent(node* head){
        if(head->next==NULL){
            return false;
        }
        node*fast=head;
        node*slow=head;
        while(slow!=NULL && fast != NULL){
            fast=fast->next;
            if(fast!=NULL)
                fast=fast->next;
            slow=slow->next;
            if(slow==fast)
                return true;
        }
        return false;
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,num;
        cin>>n;
        node*head,*tail;
        cin>>num;
        head=new node(num);
        tail=head;
        for(int i=0;i<n-1;i++){
            cin>>num;
            tail->next=new node(num);
            tail=tail->next;
        }
        int pos;
        cin>>pos;
        position(head,tail,pos);

        solution ob;
        if(ob.isCyclepresent(head))
            cout<<"True"<<endl;
        else    
            cout<<"False"<<endl;

    }
    return 0;

}