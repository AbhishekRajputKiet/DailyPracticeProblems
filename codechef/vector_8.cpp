#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={3,5,7,9,10};
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<"\n";
    for(auto it=v.begin();it!=v.end();it++)
        cout<<(*it)<<" "<<endl;
    vector<pair<int,int>>v_p={{2,9},{5,3},{9,5},{2,8}};
    cout<<"Using auto\n";
    for(auto it=v_p.begin();it!=v_p.end();it++)
        cout<<(it->first)<<" "<<(it->second)<<endl;
    cout<<"Using reference\n";
    for(auto &value:v_p)
        cout<<value.first<<" "<<value.second<<endl;
    return 0;
}
