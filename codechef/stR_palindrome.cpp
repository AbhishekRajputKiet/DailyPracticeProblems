#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s,int i,int size){
    if(i>=size/2)
        return true;
    else if(s[i]!=s[size-i-1])
        return false;
    isPalindrome(s,i+1,size);
    return true;
    
}
int main(){
    string s="Abhihba";
    cout<<isPalindrome(s,0,s.size());
    return 0;
}