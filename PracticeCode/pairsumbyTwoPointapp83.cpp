# include<bits/stdc++.h>
using namespace std;
bool Ispairi(int arr[],int n,int sum){
    int start=0;
    int end=n-1;
    while(start < end){
        if(arr[start]+arr[end]==sum)
            return true;
        if(arr[start]+arr[end]<sum)
            start++;      
        else
            end--;

    }
    return false;
}

int main(){
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Ispairi(arr,n,sum)<<endl;
    return 0;
    
}