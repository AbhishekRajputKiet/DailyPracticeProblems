#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    cout<<endl;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    int target;
    cin>>target;
    cout<<endl;
    int r=0,c=m-1;
    bool found = false ;
    while(c>=0 && r<=n-1){
        if(arr[r][c]==target){
            found = true ;
        }
        if(arr[r][c]>target)
            c--;
        else
            r++;
    }
    if(found)
        cout<<"Element is found"<<endl;
    else
        cout<<"Element does not found"<<endl;
}