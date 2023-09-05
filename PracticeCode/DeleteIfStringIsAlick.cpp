#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool halvesAreAlike(string s) {
        int count1=0;
        int count2=0;
        int n=s.length();

        for(int i=0;i<n/2;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            count1++;
        }

        for(int i=n/2;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            count2++;
        }

        if(count1==count2)
        {
            return true;
        }

        else 
            return false;
        
    }
};

int main(){
    Solution ob;
    string s = "book";
    cout<<ob.halvesAreAlike(s)<<endl;

    return 0;
}
//  https://leetcode.com/problems/determine-if-string-halves-are-alike/description/