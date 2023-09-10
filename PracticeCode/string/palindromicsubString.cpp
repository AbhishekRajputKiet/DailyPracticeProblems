#include<bits/stdc++.h>
using namespace std;
int MAX_CHAR=26;
int countPalindromicSubString(string s){
    int n=s.length();
    int count=0;
    // for frequency 
    int hashTable[MAX_CHAR];
    for(int i=0;i<n;i++){
        hashTable[s[i]-'a']++;
    }
    for(int i=0;i< 26;i++){
        if(hashTable[i]){
            count += (hashTable[i]*(hashTable[i]+1)/2);
        }
    }
    return count;
}
int main(){
    string s="abbabdbd";
    cout<<countPalindromicSubString(s)<<endl;
    return 0;
}