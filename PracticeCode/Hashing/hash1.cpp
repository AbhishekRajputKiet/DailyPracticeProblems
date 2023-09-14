#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // creat a hash array 
    int hash[13]={0};
    for(int i=0;i<n;i++)
        hash[arr[i]]++;
    // number of quaries
    int q;
    cin>>q;
    while(q--){
        int a;
        cin>>a;
        cout<<hash[a]<<endl;
    }
    return 0;
}