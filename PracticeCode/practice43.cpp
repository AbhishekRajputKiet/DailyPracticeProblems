#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node*left;
    struct Node*right ;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int SumofNodes(Node*root){
    if(root==NULL)
        return 0;
    return SumofNodes(root->left) + SumofNodes(root->right) + root->data;
}
int main(){
    /*          1 
              /   \
             2     3
            / \   / \
           4   5 6   7
    */
    Node* root =new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<"Sum of nodes is : "<<SumofNodes(root);
    return 0;
}