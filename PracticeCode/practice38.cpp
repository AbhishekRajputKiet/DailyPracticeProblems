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
int search(int inorder[],int s,int e,int curr){
    for(int i=s;i<=e;i++){
        if(curr==inorder[i])
            return i;
    }
    return -1;
}

Node* constructTree(int preorder[] ,int inorder[],int s,int e ){
    if(s>e){
        return NULL;
    }
    static int i=0;
    int curr = preorder[i];
    i++;
    Node * node =new Node(curr);
    if(s==e){
        return node;
    }
    int pos= search(inorder ,s,e,curr);
    node->left=constructTree(preorder,inorder ,s,pos-1);
    node->right=constructTree(preorder,inorder ,pos+1,e);
    return node;
}
void inorderPrint(Node* root){
    if(root== NULL){
        return ;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}
int main(){
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    Node* root =constructTree(preorder,inorder,0,4);
    inorderPrint(root);
    return 0;
}