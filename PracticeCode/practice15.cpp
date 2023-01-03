#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Size of array: ";
    cin>>n;
    int ** arr=new int * [n];
    for(int i=0;i<n;i++){
        arr[i]=new int [n];
    }
    cout<<"Enter element : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];       
        }
    }
    cout<<"Output is "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";       
        }
        cout<<endl;
    }
    return 0;
}