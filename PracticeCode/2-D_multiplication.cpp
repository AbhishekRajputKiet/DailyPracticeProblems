#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,m1;
    cin>>n1>>m1;
    cout<<endl;
    int arr1[n1][m1];
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<endl;
    int n2,m2;
    cin>>n2>>m2;
    cout<<endl;
    int arr2[n2][m2];
    for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++){
            cin>>arr2[i][j];
        }
    }
    int arr[n1][m2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            arr[i][j]=0;
        }
    }
    cout<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            for(int k=0;k<m1;k++)
                arr[i][j]=arr[i][j]+arr1[i][k] *arr2[k][j];
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}