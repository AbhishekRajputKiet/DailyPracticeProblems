#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*left;
    struct Node*right;
    Node(int val){
        data=val;
        left==NULL;
        right==NULL;
    }
};
// case 1;
void PrintKdistNode(Node*root,int k){
    if(root==NULL || k<0)
        return ;
    if(k==0){
        cout<<(root->data)<<" ";
        return ;
    }
    PrintKdistNode(root->left,k-1);
    PrintKdistNode(root->right,k-1) ; 

}
int printNodeAtK(Node*root,Node*target,int k){
    if(root==NULL)
        return -1;
    if(root==target){
        PrintKdistNode(root,k);
        return 0;
    }
    int dl=printNodeAtK(root->left,target,k);
    if(dl != -1){
        if(dl+1==k){
            cout<<(root->data)<<" ";
        }
        else{
            PrintKdistNode(root->right,k-dl-2);
        }
        return 1+dl;
    }
    int dr=printNodeAtK(root->right,target,k);
    if(dr != -1){
        if(dr+1==k){
            cout<<(root->data)<<" "; 
        }
        else{
            PrintKdistNode(root->left,k-dr-2);
        }
        return 1+dr;
    }
    return -1;
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
    printNodeAtK(root,root->left,1);

    return 0;
}