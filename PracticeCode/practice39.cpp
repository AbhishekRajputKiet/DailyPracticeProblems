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
int search(int inorder[],int start,int end,int val){
    for(int i=start;i<=end;i++){
        if(val==inorder[i])
        return i;
    }
    return -1;
}
void printInorder(Node* root){
    if(root==NULL){
        return ;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

Node* buildTree(int postorder[],int inorder[],int start,int end){
    static int i=4;
    if(start>end){
        return NULL;
    }
    int val= postorder[i];
    i--;
    Node* curr= new Node(val);
    if(start==end){
        return curr;
    }
    int pos=search(inorder,start,end,val);
    curr->right=buildTree(postorder,inorder,pos+1,end);
    curr->left=buildTree(postorder,inorder,start,pos-1);
    return curr;

}

int main(){
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    
    //build tree
    Node* root=buildTree(postorder,inorder,0,4);
    printInorder(root);
    cout<<"\n";
    return 0;
}