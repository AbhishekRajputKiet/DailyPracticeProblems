# include <bits/stdc++.h>
using namespace std ;
class Solution {
public:
    bool checkString(string s) {
        for(int i=1;i<s.size();i++){
            if(s[i]=='a'&& s[i-1]=='b')
                return false;
        }
        return true;
    }
};

int main(){
    Solution ob;
    string s="aaabbb";
    cout<<ob.checkString(s)<<endl;

    return 0;
}

//  https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/description/