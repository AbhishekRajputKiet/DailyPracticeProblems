#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*left;
    struct Node*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
Node*LCA(Node*root,int n1,int n2){
    if(root== NULL)
        return NULL;
    if(root->data==n1 ||root->data==n2)
        return root;
    
    Node*Left=LCA(root->left,n1,n2);
    Node*Right=LCA(root->right,n1,n2);
    if(root->left != NULL && root->right != NULL)
        return root;
    if(root->left == NULL && root->right == NULL)
        return NULL;
    if(left != NULL)
        return LCA(root->left,n1,n2);
    else
        return LCA(root->right,n1,n2);
    
}
int FindDist(Node*root,int k,int dist){
    if(root==NULL)
        return -1;
    if(root->data == k )
        return dist;
    int left=FindDist(root->left,k,dist+1);
    if(left != -1)
        return left;
    return FindDist(root->right,k,dist+1);
}
int dis_root(Node*root,int n1,int n2){
    Node*lca=LCA(root,n1,n2);
    int d1=FindDist(root,n1,0);
    int d2=FindDist(root,n2,0);
    return (d1+d2);
}

int main(){
    int n1,n2;
    cout<<"Enter two nodes: ";
    cin>>n1>>n2;
    /*          1 
              /   \
             2     3
            / \   / \
           4   5 6   7
    */
    Node* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    
    cout<<"Distance b/w roots is : "<<dis_root(root,n1,n2);


    return 0;
}