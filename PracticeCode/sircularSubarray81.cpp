# include<bits/stdc++.h>
using namespace std;
int kadane(int arr[],int n){
    int maxsum=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxsum=max(maxsum,sum);
        if(sum<0)
            sum=0;
    }
    return maxsum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int nonwrapsum=kadane(arr,n);
    int tsum=0;
    for(int i=0;i<n;i++){
        tsum=tsum+arr[i];
        arr[i] = -1*arr[i];
    }
    
    int wrapsum=tsum+kadane(arr,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;

}