#include<bits/stdc++.h>
using namespace std;
void rev(int arr[],int n,int i){
    if(i>n/2)
        return ;
    swap(arr[i],arr[n-i]);
    rev(arr,n,i+1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
        cin>>arr[i];   
    rev(arr,6,0);
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
    return 0;
}