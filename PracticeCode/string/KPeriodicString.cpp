#include<bits/stdc++.h>
using namespace std;
bool isPrefix(string s,int n,int i,int k){
    if(i+k>n)
        return false;
    for(int j=0;j<k;j++){
        if(s[i] != s[j])
            return false;
        i++;
    }
    return true;
}
bool isKPeriodic(string s,int n,int k){
    for(int i=k;i<n;i=i+k){
        if(!isPrefix(s,n,i,k))
            return false;
    }
    return true;

}

int main(){
    string s= "geeksgeeks";
    int k=5,n=s.size();
    if(isKPeriodic(s,n,k))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}