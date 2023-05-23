#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n){
    if(n==1)
        return true;
    bool restarr=sorted(arr+1,n-1);
    return (arr[0]<=arr[1] && restarr);
}

int main(){
    int n;
    cin>>n;
    cout<<"Enter arr element :"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sorted(arr,n);
    return 0;
}