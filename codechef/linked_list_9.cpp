#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class solution{
    public:
    int getMiddle(node*head){
        node*slow=head;
        node*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow->data;
    }  
};


int main()
{
        int n;
        cin>>n;
        int data;
        cin>>data;
        struct node*head=new node(data);
        struct node*tail=head;
        for(int i=0;i<n-1;i++){
            cin>>data;
            tail->next=new node(data);
            tail=tail->next;
        }
        solution s;
        cout<<s.getMiddle(head)<<endl;
    return 0;
}