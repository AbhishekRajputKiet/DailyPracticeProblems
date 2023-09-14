#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    map<char,int>mp;
    for(int i=0;i<s.length();i++)
        mp[s[i]-'a']++;
    int q;
    cin>>q;

    while(q--){
        char ch;
        cin>>ch;
        cout<<mp[ch-'a']<<endl;
    }

    return 0;
}