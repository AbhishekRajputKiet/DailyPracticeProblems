#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void postorder(struct Node * root){
    if(root == NULL){
        return ;
    }
    postorder(root->left);
    
    postorder(root->right);
    cout<<root->data<<" ";
    
}
int main(){
    /*          1 
              /   \
             2     3
            / \   / \
           4   5 6   7
    */
    struct Node* root=new Node(1);
    root->left = new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right= new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<"Postorder is: ";
    postorder(root);
    return 0;
}