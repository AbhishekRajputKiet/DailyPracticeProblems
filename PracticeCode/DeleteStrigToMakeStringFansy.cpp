#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        int count=1;
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1])
                count++;
            else
                count=1;
            if(count>=3)
                continue;           
            ans+=s[i];
        }
        return ans;
    }
};

int main(){
    Solution ob;
    string s = "leeetcode";
    string ans=ob.makeFancyString(s);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    cout<<endl;

    return 0;
}
//  https://leetcode.com/problems/delete-characters-to-make-fancy-string/description/