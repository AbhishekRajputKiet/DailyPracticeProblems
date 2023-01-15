#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
bool Isbalanced(Node* root,int*hight){
    if(root==NULL)
        return true;
    int lh=0,rh=0;
    if(Isbalanced(root->left,&lh)==false)
        return false;
    if(Isbalanced(root->right,&rh)==false)
        return false;
    *hight=max(lh,rh)+1;
    if(abs(lh-rh) <=1 ){
        return true;
    }
    else
        return false;
}

int main(){
    /*          1 
              /   \
             2     3
            / \   / \
           4   5 6   7
                      \
                       8
                        \
                         9
    */
    Node* root = new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    root->right->right->right=new Node(8);
    root->right->right->right->right=new Node(9);
    int hight=0;
    if(Isbalanced(root,&hight)==true)
        cout<<"Balance Tree"<<endl;
    else
        cout<<"Unbalace Tree"<<endl;
    return 0;
}