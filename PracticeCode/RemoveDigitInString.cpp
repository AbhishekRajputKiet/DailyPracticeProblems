#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string replaceDigits(string s) {
        for(int i=1;i<s.size();i=i+2){
            int temp=s[i]-'0';
            s[i]=s[i-1]+temp;
        }
        return s;
    }
};
int main(){
    Solution ob;
    string s = "a1c1e1";
    string ans=ob.replaceDigits(s);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}

//     https://leetcode.com/problems/replace-all-digits-with-characters/description/