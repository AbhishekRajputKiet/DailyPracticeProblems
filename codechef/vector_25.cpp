#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="Abhishek";
    m[13]="Rajput";
    m[2]="Kumar";
    m.insert({3,"Is"});
    for(auto i:m)
        cout<<i.first<<" "<<i.second<<endl;
    cout<<"13 is present or not -> "<<m.count(13)<<endl;
    cout<<"After erase "<<endl;
    m.erase(2);
    for(auto i:m)
        cout<<i.first<<" "<<i.second<<endl;

    return 0;
}