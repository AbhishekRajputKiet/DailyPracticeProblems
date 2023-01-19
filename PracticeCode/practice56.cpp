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
    cout<<"Enter data for inserting in left: "<<data<<endl;
    root->left=buildtree(root->right);
    cout<<"Enter data for inserting in right: "<<data<<endl;
    root->right=buildtree(root->left);
    return root;
}
void levelorder(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
        if(temp==NULL){
            //purana level complet ho chuka ha
            cout<<endl;
            // queue still has some child nodes
            if(!q.empty())
                q.push(NULL);
        }
        else{
            cout<< temp->data <<" ";
            if(temp->left){
            q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        
    }
}

void inorder(node*root){
    if(root==NULL)
        return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node*root){
    if(root==NULL)
        return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node*root){
    if(root==NULL)
        return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
     /*         1 
              /   \
             2     3
            / \   / \
           4   5 6   7
    */
   // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 
    node* root=NULL;
    root=buildtree(root);
    levelorder(root);
    cout<<"Inorder traversal is :"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Preorder traversal is :"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Postorder traversal is :"<<endl;
    postorder(root);
    cout<<endl;
    
    return 0;
}