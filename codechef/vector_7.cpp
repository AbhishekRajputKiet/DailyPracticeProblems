#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,4,7,9,3};
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    
    cout<<endl;
    cout<<"Using iterator"<<endl;
    vector<int> :: iterator it = v.begin();
    for(it=v.begin();it!=v.end();it++)
        cout<<(*it)<<" ";
    cout<<"\n"<<"iterator vector pair"<<endl;
    vector<pair<int,int>>v_p={{8,8},{3,0},{8,2},{4,9}};
    vector<pair<int,int>> :: iterator i ;
    for(i=v_p.begin();i!=v_p.end();i++)
        cout<<(*i).first<<" "<<(*i).second<<endl;
    // (*it).first <=> (it->first)
    return 0;
}