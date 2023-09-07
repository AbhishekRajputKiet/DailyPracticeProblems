#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for(int i=0;i<words.size();i++){
            if(words[i].substr(0,pref.size())==pref)
                count++;
        }
        return count;
    }
};

int main(){
    Solution ob;
    vector<string> words = {"pay","attention","practice","attend"};
    string pref = "at";
    cout<<ob.prefixCount(words,pref)<<endl;

    return 0;
}