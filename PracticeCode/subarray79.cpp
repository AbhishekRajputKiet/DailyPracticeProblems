# include<bits/stdc++.h>
using namespace std;

// cumulatice sum apporach tc=O(n)^2

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ind[n+1];
    ind[0]=0;
    for(int i=1;i<=n;i++){
        
        ind[i] = ind[i-1] + arr[i-1];
    }
    int maxSum=INT_MIN;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=ind[i]-ind[j];
            maxSum=max(sum,maxSum);
        }
    }
    cout<<maxSum<<endl;

    return 0;
}