# include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    // first point
    for(int i=0;i<n;i++){
        // second point
        for(int j=i;j<n;j++){
            // print between first to second point 
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}