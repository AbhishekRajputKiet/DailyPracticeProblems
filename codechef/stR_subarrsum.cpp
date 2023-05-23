#include<bits/stdc++.h>
using namespace std;
void printS(int id,vector<int>&ds,int s,int sum,int arr[],int n){
    // Base case
    if(id==n){
        if(s==sum){
            for(auto it:ds)
                cout<<it<<" ";
            cout<<endl;
        }
        return ;
    }
    ds.push_back(arr[id]);
    s=s+arr[id];
    printS(id+1,ds,s,sum,arr,n);        // for take
    s=s-arr[id];
    ds.pop_back();
    // not take
    printS(id+1,ds,s,sum,arr,n);

}
int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int>ds;
    printS(0,ds,0,sum,arr,n);
    return 0;
}