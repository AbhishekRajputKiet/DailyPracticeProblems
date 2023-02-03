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
int calcHight(Node* root){
    if(root==NULL)
        return 0;
    return max(calcHight(root->left),calcHight(root->right))+1;
}
int CalcDiameter(Node* root){
    if(root==NULL){
        return 0;
    }    
    int lHight=calcHight(root->left);
    int rHight=calcHight(root->right);
    int currDiameter=lHight + rHight + 1;

    int lDiameter=CalcDiameter(root->left);
    int rDiameter=CalcDiameter(root->right);
    return max(currDiameter,max(lDiameter,rDiameter));

}

int main(){
    /*          1 
              /   \
             2     3
            / \   / \
           4   5 6   7
    */
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<CalcDiameter(root);
    return 0;
}