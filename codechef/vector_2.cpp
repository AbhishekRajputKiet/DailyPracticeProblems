#include<bits/stdc++.h>
using namespace std;
void printv(vector<int>v){
    cout<<"Size of vector "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        printv(v);
        v.push_back(x);
    }
    printv(v);
    return 0;
}