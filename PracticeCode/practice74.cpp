# include<bits/stdc++.h>
using namespace std;

void printv(vector<pair<int,int > >&v){
    cout<<"size of v : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}



int main(){
    vector<pair<int,int > >v;
    printv(v);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printv(v);
    return 0;

}