# include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            if(sum==s){
                cout<<i+1<<" "<<j+1<<endl;
                return 0;
            }

        }
    }
    cout<<-1<<" "<<-1<<endl;
    return 0;
}