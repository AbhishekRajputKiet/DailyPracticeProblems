#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int st=-1,en=-1,sum=0;
    int i=0,j=0;
    while(j<n && sum + arr[j]<=s){
        sum=sum+arr[j];
        j++;
    }
    if(sum==s){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while(j<n){
        sum = sum+ arr[j];
        while(sum>s){
            sum = sum - arr[i];
            i++;
        }
        if(sum==s){
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;
    return 0;
}


