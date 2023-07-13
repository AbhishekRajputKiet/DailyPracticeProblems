# include<bits/stdc++.h>
using namespace std;
// kadane's algorithm

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxsum=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=arr[i]+sum;
        maxsum=max(maxsum , sum);
        if(maxsum<0)
            sum=0;

    }
    cout<<maxsum<<endl;
    return 0;
}