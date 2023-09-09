#include<bits/stdc++.h>
using namespace std;

void substring(string s){

    for(int i=0;i<s.length();i++){
        string str;
        for(int j=i;j<s.length();j++){
            str=str+s[j];
            cout<<str<<endl;
        }
    }
}
int main(){
    string s="absh";
    substring(s);
    return 0;
}