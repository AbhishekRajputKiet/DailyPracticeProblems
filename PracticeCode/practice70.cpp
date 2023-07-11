# include<bits/stdc++.h>
using namespace std ;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int N=INT_MIN;
    for(int i=0;i<n;i++)
        N=max(N,a[i]);
    int idx[N+1];
    for(int i=0;i<N+1;i++){
        idx[i]=-1;
    }
    int j=0,mini=INT_MAX;
    while(j<n ){
        if(idx[a[j]] != -1){
            mini = min(mini,idx[a[j]]);
        }
        else{
            idx[a[j]]=j;
        }
        j++;

    }
    cout<<mini<<endl;

}