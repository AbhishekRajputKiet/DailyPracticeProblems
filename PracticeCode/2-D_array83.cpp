#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,m;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<("Output is : ")<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int x;
    cout<<"Enter a element : ";
    cin>>x;
    bool flag = false;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==x){
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }
    if(flag)
        cout<<("Element is present.")<<endl;
    else   
        cout<<"Element is not present."<<endl;

    return 0;
}