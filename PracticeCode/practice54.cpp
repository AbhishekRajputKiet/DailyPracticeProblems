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
bool getpath(Node*root,int key,vector<int>&path){
    if(root==NULL)
        return false;
    path.push_back(root->data);
    if(root->data==key)
        return true;
    if(getpath(root->left,key,path) || getpath(root->right,key,path)){
        return true;
    }
    path.pop_back();
    return false;
    
}
int LCA(Node*root,int n1,int n2){
    vector<int>path1,path2;
    if(!getpath(root,n1,path1) || !getpath(root,n2,path2))
        return -1;
    int pc;
    for(pc=0;pc=path1.size() && path2.size();pc++){
        if(path1[pc] != path2[pc])
            break;
    }
    return path1[pc-1];
}
int main(){
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
    int n1=2;
    int n2=7;
    int lca=LCA(root,n1,n2);
    if(lca==-1)
        cout<<"LCA does not exist."<<endl;
    else
        cout<<"LCA : "<<lca<<endl;    
    return 0;
}