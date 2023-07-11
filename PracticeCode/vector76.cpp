# include<bits/stdc++.h>
using namespace std ;
void printv(vector<int >  &v){
    for(int i=0;i<v.size();i++){
        cout << v[i]<<" ";
    }
    cout<<endl;
}


int main(){
    vector<vector<int > > v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        vector<int>temp;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++){
        printv(v[i]);
    }
    return 0;
}