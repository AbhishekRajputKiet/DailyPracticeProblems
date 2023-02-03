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
int hight(Node* root){
    if(root==NULL)
        return 0;
    int lh=hight(root->left);
    int rh=hight(root->right);
    return max(lh,rh)+1;
}
bool Idbalanced (Node* root){
    if(root==NULL){
        return true;
    }
    if(Idbalanced (root->left) == false)
        return false;
    if(Idbalanced (root->right) == false)
        return false;
    int lh = hight(root->left);
    int rh = hight(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }


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
    if(Idbalanced(root)){
        cout<<"Tree is balanced  "<<endl;
    }
    else{
        cout<<"Tree unbalanced  "<<endl;
    }
    return 0;
}