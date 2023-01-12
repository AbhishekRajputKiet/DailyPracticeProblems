#include<bits/stdc++.h>
using namespace std;
bool BinarySearch(int *arr,int s,int e,int key){
    if(s>e)
        return false;
    int mid=s+(e-s)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key)
        return BinarySearch(arr,mid+1,e,key);
    else
        return BinarySearch(arr,s,mid-1,key);
}


int main(){
    int arr[6]={1,2,5,13,16,33};
    int size=6,s=0,e=5;
    int key=33;

    int ans=BinarySearch(arr,s,e,key);
    if(ans)
        cout<<"Element is present.";
    else
        cout<<"Element is not present.";
    return 0;
}