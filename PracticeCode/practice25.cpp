#include<bits/stdc++.h>
using namespace std;
bool search(int *arr,int size,int key){
    if(size==0)
        return false;
    if(arr[0]==key)
        return true;
    bool remaningpart= search(arr+1,size-1,key);
    return remaningpart;
}

int main(){
    int size=5;
    int arr[5]={3,2,1,8,6};
    int key=5;
    int ans=search(arr,size,key);
    if(ans)
        cout<<"Key is present in array";
    else
        cout<<"Key is not present in array";
    return 0;
}