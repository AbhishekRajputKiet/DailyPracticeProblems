#include<bits/stdc++.h>
using namespace std;
/*
Given N string ,print unque string in 
lexiographical order with their frequency
*/
int main(){
    map<string,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto &pr:m)
        cout<<(pr.first)<<" "<<(pr.second)<<endl;
    return 0;
}