#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int>symbole={{'(',1},{'[',2},{'{',3},{')',-1},{']',-2},{'}',-3}};
string isBalanced(string s){
    stack<char>c;
    for(char bracket : s){
        if(symbole[bracket]>0)
            c.push(bracket);
        else{
            if(c.empty())
                return "NO";
            char top=c.top();
            c.pop();
            if(symbole[top]+symbole[bracket] != 0)
                return "NO";
            
        }

    }
    if(c.empty())
        return "YES";
    return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
    return 0;
}