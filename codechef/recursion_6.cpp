#include<bits/stdc++.h>
using namespace std;
int firstocc(int arr[],int n,int i,int key){
    if(i==n)
        return -1;
    if(arr[i]==key)
        return i;
    return firstocc(arr,n,i+1,key);    
}
int lastocc(int arr[],int n,int i,int key){
    if(i==n)
        return -1;
    int restarr=lastocc(arr,n,i+1,key);
    if(restarr!=-1)
        return restarr;
    if(arr[i]==key)
        return i;
}
int main(){
    int arr[]={2,4,7,0,3,1,9,7,8};
    cout<<firstocc(arr,9,0,7)<<endl;
    cout<<lastocc(arr,9,0,7);
    return 0;
}