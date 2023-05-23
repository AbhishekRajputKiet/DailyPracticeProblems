#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void DNFSort(int arr[],int n){
    int mid=0,low=0,high=n-1;
    while(mid<=high){
        if(arr[mid]<1){
            swap(arr,low,mid);
            low++;
            mid++;
        }
        if(arr[mid]>1){
            swap(arr,mid,high);
            high--;
        }
        else
            mid++;
    }
}

int main(){
    int arr[]={1,0,2,1,0,1,2,1,2};
    DNFSort(arr,9);
    for(int i=0;i<9;i++)
        cout<<arr[i]<<" ";
    return 0;
}

