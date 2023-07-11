# include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int N=INT_MIN;
    for(int i=0;i<n;i++)
        N=max(n,arr[i]);
    bool inx[N+1];
    for(int i=0;i<N+1;i++)
        inx[i]=false;
    
    for(int j=0;j<n;j++ ){
        if(arr[j]>=0)
            inx[arr[j]]=true;
        
    }
    int ans=-1;
    for(int i=0;i<N+1;i++){
        if(inx[i]==false){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}