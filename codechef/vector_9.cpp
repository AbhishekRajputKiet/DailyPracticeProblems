#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>m){
    for(auto &pr:m)
        cout<<(pr.first)<<" "<<(pr.second)<<endl; 
    
}
int main(){
    map<int,string>m;
    m[1]="adc";     //O(log n)
    m[5]="edc";
    m[3]="abc";
    m.insert({4,"bcd"});
    
    cout<<"\n";
    auto it=m.find(3);      //O(lon n)
    if(it==m.end())
        cout<<"No value."<<endl;
    else
        cout<<(*it).first<<" "<<(*it).second<<endl;
    cout<<"after erasing 5"<<endl;
    m.erase(5);         //O(log n)
    print(m);
    return 0;
}