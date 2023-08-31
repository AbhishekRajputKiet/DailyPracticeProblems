#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int m=word1.length();
        int n=word2.length();
        int i=0;
        for(int i=0;i<m || i<n ; i++){
            if(i<m)
                s=s+word1[i];
            if(i<n)
                s=s+word2[i];
        }
        return s;
    }
};

int main(){
    Solution ob;
    string word1 = "abc", word2 = "pqr";
    string ans=ob.mergeAlternately(word1,word2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    cout<<endl;

    return 0;
}
//  https://leetcode.com/problems/merge-strings-alternately/description/