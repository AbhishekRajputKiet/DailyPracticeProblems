#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
class solution{
    public :
    // function for find length
    int getLength(Node* head){
        Node*temp=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        return len;
    }
    // function for finding middle
    int getMiddle(Node *head)
    {
        Node *temp=head;
        if(getLength(head)==0)
            return -1;
        if(getLength(head)==1)
            return temp->data;
        int s=0;
        while(s<(getLength(head)/2)){
            temp=temp->next;
            s++;
        }
        return temp->data;
    }
}; 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int data;
        cin>>data;
        struct Node*head=new Node(data);
        struct Node*tail=head;
        for(int i=0;i<n-1;i++){
            cin>>data;
            tail->next=new Node(data);
            tail =tail->next;
        }
        solution ob;
        cout<<ob.getMiddle(head)<<endl;
    }
    return 0;
}