# include<bits/stdc++.h>
using namespace std;
void printv(vector<int>&v){
    cout<<"size of vector : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<int>v[n];
    for(int i=0;i<n;i++){
        int N;
        cin>>N;
        for(int j=0;j<N;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<n;i++){
        printv(v[i]);
    }
    return 0;
}