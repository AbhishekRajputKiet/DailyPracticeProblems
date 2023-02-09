#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string>p;
    pair<int,int>q;
    cin>>q.first>>q.second;
    cout<<q.first<<" "<<q.second;
    cout<<"\n";
    //p=make_pair(2,"abc");
    p={2,"abc"};
    pair<int,string>&p1=p;
    p.first=3;
    cout<<p.first<<"\n"<<p.second<<endl;
    return 0;
}