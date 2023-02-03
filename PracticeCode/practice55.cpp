#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }    
};
node* buildtree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for inserting in left: "<<endl;
    root->left=buildtree(root->right);
    cout<<"Enter data for inserting in right: "<<endl;
    root->right=buildtree(root->left);
    return root;
}
int main(){
    node* root=NULL;
    root=buildtree(root);
    
    return 0;
}